public class CargoAirliner extends AirTransporter {
    private int maxCargoWeight;

    CargoAirliner() {}

    CargoAirliner(String manufacturer, double maxAltitude, double maxSpeed, int maxCargoWeight) {
        super(manufacturer, maxAltitude, maxSpeed);
        setCargoWeight(maxCargoWeight);
    }

    void setCargoWeight(int maxCargoWeight) {
        this.maxCargoWeight = maxCargoWeight;
    }

    int getCargoWeight() {
        return this.maxCargoWeight;
    }

    public void showDetails() {
        System.out.println("Air Transporter Details");
        System.out.println("Manufacturer: " + getManufacturer());
        System.out.println("Maximum Altitude: " + getMaxAltitude() + " ft");
        System.out.println("Maximum Speed: " + getMaxSpeed() + " KM/Hr");
        System.out.println("Max Weight Capacity: " + getCargoWeight() + " KG"); 
    }
}