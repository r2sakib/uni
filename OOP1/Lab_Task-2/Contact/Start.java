public class Start {
    public static void main (String []args) {
        Contact c1 = new Contact("Sadman Sakib", "001", 20, "01701111111", 'M');
        Contact c2 = new Contact("Jane Doe", "002", 29, "0158888888", 'F');

        Contact c3 = new Contact();
        c3.setPersonName("Adreeta");
        c3.setAge(20);
        c3.setPersonId("003");
        c3.setMobileNumber("01622222222");
        c3.setGender('F');

        Contact c4 = new Contact();
        c4.setPersonName("Toha");
        c4.setAge(20);
        c4.setPersonId("004");
        c4.setMobileNumber("01322222222");
        c4.setGender('M');

        c1.showDetails();
        c1.showOperator();

        c2.showDetails();
        c2.showOperator();
        
        c3.showDetails();
        c3.showOperator();

        c4.showDetails();
        c4.showOperator();

        System.out.println(c1.getPersonName());
        System.out.println(c1.getMobileNumber());
    }
}