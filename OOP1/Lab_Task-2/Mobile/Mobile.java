public class Mobile {
    private String mobileOwnerName;
    private String mobileNumber;
    private double mobileBalance;
    private String mobileOSName;
    private boolean lock;

    public Mobile (String mobileOwnerName, String mobileNumber, double mobileBalance, String mobileOSName, boolean lock) {
        setMobileOwnerName(mobileOwnerName);
        setMobileNumber(mobileNumber);
        setMobileBalance(mobileBalance);
        setMobileOSName(mobileOSName);
        setLock(lock);
    }

    public Mobile () {}

    public void setMobileOwnerName(String mobileOwnerName) {
        this.mobileOwnerName = mobileOwnerName;
    }

    public void setMobileNumber(String mobileNumber) {
        this.mobileNumber = mobileNumber;
    }

    public void setMobileBalance(double mobileBalance) {
        this.mobileBalance = mobileBalance;
    }

    public void setMobileOSName(String mobileOSName) {
        this.mobileOSName = mobileOSName;
    }

    public void setLock(boolean lock) {
        this.lock = lock;
    }  

    public String getMobileOwnerName() {
        return mobileOwnerName;
    }

    public String getMobileNumber() {
        return mobileNumber;
    }

    public double getMobileBalance() {
        return mobileBalance;
    }

    public String getMobileOSName() {
        return mobileOSName;
    }

    public void showDetails() {
        if (lock == false) {
            System.out.println("----------------------------");
            System.out.println("Mobile Owner Name: " + mobileOwnerName);
            System.out.println("Mobile Number: " + mobileNumber);
            System.out.println("Mobile balance: " + mobileBalance);
            System.out.println("Mobile OS Name: " + mobileOSName);
            System.out.println("----------------------------");
        }
        else {
            System.out.println("Phone is locked.");
        }
    }

    public void recharge(int amount) {
        if (lock == false) {
            mobileBalance += amount;
            System.out.println("Recharge successful");
        }
        else {
            System.out.println("Phone is locked.");
        }
    }

    public float adjustAfterCall(float timeDuration, float costPerMinute) {
        if (lock == false) {
            float cost = timeDuration*costPerMinute; 
            mobileBalance -= cost;

            System.out.println("Cost: " + cost);
            System.out.println("New balance: " + mobileBalance);

            return cost;
        }
        else {
            System.out.println("Phone is locked.");
            return 0f;
        }
        
    }





    



}