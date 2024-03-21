public class PassengerAirliner extends AirTransporter {
    private int passengerCapacity;

    PassengerAirliner(String manufacturer, double maxAltitude, double maxSpeed, int passengerCapacity) {
        super(manufacturer, maxAltitude, maxSpeed);
        setPassengerCapacity(passengerCapacity);
    }

    void setPassengerCapacity(int passengerCapacity) {
        this.passengerCapacity = passengerCapacity;
    }

    int getPassengerCapacity() {
        return this.passengerCapacity;
    }

    public void showDetails() {
        System.out.println("Air Transporter Details");
        System.out.println("Manufacturer: " + getManufacturer());
        System.out.println("Maximum Altitude: " + getMaxAltitude() + " ft");
        System.out.println("Maximum Speed: " + getMaxSpeed() + " KM/Hr");
        System.out.println("Passenger Capacity: " + getPassengerCapacity()); 
    }
}