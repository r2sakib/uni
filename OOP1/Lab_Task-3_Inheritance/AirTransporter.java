public class AirTransporter {
    private String manufacturer;
    private double maxAltitude;
    private double maxSpeed;

    public AirTransporter() {}

    public AirTransporter(String manufacturer, double maxAltitude, double maxSpeed) {
        setManufacturer(manufacturer);
        setMaxAltitude(maxAltitude);
        setMaxSpeed(maxSpeed);
    }

    void setManufacturer(String manufacturer) {
        this.manufacturer = manufacturer;
    }

    void setMaxAltitude(double maxAltitude) {
        this.maxAltitude = maxAltitude;
    }

    void setMaxSpeed(double maxSpeed) {
        this.maxSpeed = maxSpeed;
    }

    String getManufacturer() {
        return this.manufacturer;
    }

    double getMaxAltitude() {
        return this.maxAltitude;
    }

    double getMaxSpeed() {
        return this.maxSpeed;
    }

    public void showDetails() {
        System.out.println("Air Transporter Details");
        System.out.println("Manufacturer: " + getManufacturer());
        System.out.println("Maximum Altitude: " + getMaxAltitude() + " ft");
        System.out.println("Maximum Speed: " + getMaxSpeed() + " KM/Hr");
    }
}