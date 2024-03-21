public class Main{
    public static void main(String[] args){
        PassengerAirliner boeing747 = new PassengerAirliner("Boeing",44947,988,524);
        boeing747.showDetails();
        CargoAirliner airbus22 = new CargoAirliner();
        airbus22.setManufacturer("AirBus");
        airbus22.setMaxAltitude(30000);
        airbus22.setMaxSpeed(650);
        airbus22.setCargoWeight(10000);
        airbus22.showDetails();
    }
}
    