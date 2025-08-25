public class Contact {
    private String personName;
    private String personId;
    private int age;
    private String mobileNumber;
    private char gender;

    public Contact(String personName, String personId, int age, String mobileNumber, char gender) {
        setPersonName(personName);
        setPersonId(personId);
        setAge(age);
        setMobileNumber(mobileNumber);
        setGender(gender);
    }

    public Contact () {}

    public void setPersonName(String personName) {
        this.personName = personName;
    }

    public void setPersonId(String personId) {
        this.personId = personId;
    }

    public void setAge(int age) {
        if (age >= 0){
            this.age = age;
        }
        else {
            System.out.println("Invalid age");
        }
    }

    public void setMobileNumber(String mobileNumber) {
        this.mobileNumber = mobileNumber;
    }

    public void setGender(char gender) {
        this.gender = gender;
    }

    public String getPersonName() {
        return personName;
    }

    public String getPersonId() {
        return personId;
    }

    public int getAge() {
        return age;
    }

    public String getMobileNumber() {
        return mobileNumber;
    } 

    public void showOperator() {
        char operatorCode = mobileNumber.charAt(2);

        if (operatorCode == '3' || operatorCode == '7') {
            System.out.println("Operator: GP");
        }
        else if (operatorCode == '5') {
            System.out.println("Operator: Teletalk");
        }
        else if (operatorCode == '6') {
            System.out.println("Operator: Robi");
        }
        else if (operatorCode == '8') {
            System.out.println("Operator: Robi");
        }
        else if (operatorCode == '9') {
            System.out.println("Operator: Banglalink");
        }
        else {
            System.out.println(operatorCode);
        }
    }

    public void showDetails() {
        System.out.println("---------------------------------");
        System.out.println("Name: " + personName);
        System.out.println("ID: " + personId);
        System.out.println("Age: " + age);
        System.out.println("Mobile number: " + mobileNumber);
        System.out.println("Gender: " + gender);
        System.out.println("---------------------------------");
    }
}
    