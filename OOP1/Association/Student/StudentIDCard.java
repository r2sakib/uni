public class StudentIDCard {
    private String serial;
    private String validity;
    private double printingBalance;

    public StudentIDCard() {};

    public StudentIDCard(String serial, String validity, double printingBalance) {
        setId(serial);
        setValidity(validity);
        setPrintingBalance(printingBalance);
    }

    public void setId(String serial) {
        this.serial = serial;
    }

    public void setValidity(String validity) {
        this.validity = validity;
    }

    public void setPrintingBalance(double printingBalance) {
        this.printingBalance = printingBalance;
    }

    public String getId() {
        return this.serial;
    }

    public String getValidity() {
        return this.validity;
    }

    public double printingBalance() {
        return this.printingBalance;
    }

    public void showDetails() {
        System.out.println("Serial number: " + this.serial);
        System.out.println("Validity: " + this.validity);
        System.out.println("Printing Balance: " + this.printingBalance);
    }

}