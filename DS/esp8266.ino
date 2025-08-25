#include <SoftwareSerial.h>
#include <TimeLib.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define RX 11 // TX of ESP8266
#define TX 10 // RX of ESP8266
#define THERMISTORPIN 6

#define SCREEN_WIDTH 128  // OLED display width, in pixels
#define SCREEN_HEIGHT 64  // OLED display height, in pixels
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

SoftwareSerial esp8266(RX, TX); 

// ThingSpeak
String AP = "Aurora_2.4";       // CHANGE ME
String PASS = "bladerunner066@"; // CHANGE ME
String API = "DZT780IUSGB11ET4";   // CHANGE ME
String HOST = "api.thingspeak.com";
String PORT = "80";
String field = "field1";
int countTrueCommand;
int countTimeCommand; 
boolean found = false; 
int valSensor = 1;

// TIME
String atTimeString;
tmElements_t tm;
int Year, Month, Day, Hour, Minute, Second;

void setup() {
  Serial.begin(4800);
  esp8266.begin(9600);
  
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  display.display();

  pinMode(THERMISTORPIN, INPUT);

  sendCommand("AT",5,"OK", 1);
  sendCommand("AT+CWMODE=1",5,"OK", 1);
  sendCommand("AT+CWJAP=\""+ AP +"\",\""+ PASS +"\"",20,"OK", 1);
  
  esp8266.println("AT+CIPSNTPCFG=1,6,\"0.pool.ntp.org\",\"time.google.com\"");
  while( esp8266.available() > 0 ) esp8266.readString();
  delay(2000);
  esp8266.println("AT+CIPSNTPTIME?");

  while (esp8266.available() == 0) {};
  atTimeString = esp8266.readString();
  createTimeElements(atTimeString);
  setTime(makeTime(tm));
}

void loop() {
//  pushSensor()
 delay(1000);
 Serial.println(getDate());
 Serial.println(getTime());
 Serial.println(getTemp());
}

// From thermistor datasheet
#define RT0 10000
#define B 4100
// ----
#define VCC 4.06
#define R 10000

float RT, VR, ln, T, VRT;
float T0 = 25 + 273.15;

float getTemp() {

  VRT = analogRead(THERMISTORPIN);              //Acquisition analog value of VRT
  VRT  = (VCC / 1023.00) * VRT;      //Conversion to voltage
  VR = VCC - VRT;
  RT = VRT / (VR / R);                //Resistance of RT
  ln = log(RT / RT0);
  T = (1 / ((ln / B) + (1 / T0)));   //Temperature from thermistor

  T =  T - 273.15;                 //Conversion to Celsius

  return T;
}

int monthStringToInt(String month) {
  if (month.equals("Jan")) {return 1;}
  else if (month.equals("Mar")) {return 3;}
  else if (month.equals("Feb")) {return 2;}
  else if (month.equals("Apr")) {return 4;}
  else if (month.equals("May")) {return 5;}
  else if (month.equals("Jun")) {return 6;}
  else if (month.equals("Jul")) {return 7;}
  else if (month.equals("Aug")) {return 8;}
  else if (month.equals("Sep")) {return 9;}
  else if (month.equals("Oct")) {return 10;}
  else if (month.equals("Nov")) {return 11;}
  else if (month.equals("Dec")) {return 12;}
}

void createTimeElements(String atTimeString) {
  String justTimeDate = atTimeString.substring(atTimeString.indexOf(":")+1, atTimeString.indexOf("202")+4);
  tm.Month = monthStringToInt(justTimeDate.substring(4, 7));
  tm.Day = justTimeDate.substring(8, 10).toInt();
  tm.Hour = justTimeDate.substring(11, 13).toInt();
  tm.Minute = justTimeDate.substring(14, 16).toInt();
  tm.Second = justTimeDate.substring(17, 19).toInt()+2;
  tm.Year = CalendarYrToTm(justTimeDate.substring(20).toInt());
}

String getTime() {
  String time = String();
  time += hourFormat12();;
  time += ":";
  if (minute() < 10)
    time += "0";
  time += minute();
  time += ":";
  if (second() < 10)
    time += "0";
  time += second(); 

  return time;
}

String getDate() {
  String date = String();
  date += dayShortStr(weekday());
  date += " ";
  date += day();
  date += "-";
  date += monthShortStr(month());
  date += "-";
  date += year();
  return date;
}

void pushSensorData() {
 valSensor = getSensorData();
 String getData = "GET /update?api_key="+ API +"&"+ field +"="+String(valSensor);
 sendCommand("AT+CIPMUX=1",5,"OK", valSensor);
 sendCommand("AT+CIPSTART=0,\"TCP\",\""+ HOST +"\","+ PORT,5,"OK", valSensor);
 sendCommand("AT+CIPSEND=0," +String(getData.length()+4),2,">", valSensor);
 esp8266.println(getData);delay(1500);countTrueCommand++;
 sendCommand("AT+CIPCLOSE=0",2,"OK", valSensor);
}

int getSensorData(){
  return random(1000); // Replace with 
}

void sendCommand(String command, int maxTime, char readReplay[], int val) {
  Serial.print(countTrueCommand);
  Serial.print(". at command => ");
  Serial.print(command);
  Serial.print(" ");
  Serial.print(val);
  Serial.print(" ");
  while(countTimeCommand < (maxTime*1))
  {
    esp8266.println(command);//at+cipsend
    if(esp8266.find(readReplay))//ok
    {
      found = true;
      break;
    }
  
    countTimeCommand++;
  }
  
  if(found == true)
  {
    Serial.println("PASS");
    countTrueCommand++;
    countTimeCommand = 0;
  }
  
  if(found == false)
  {
    Serial.println("FAIL");
    countTrueCommand = 0;
    countTimeCommand = 0;
  }
  
  found = false;
 }