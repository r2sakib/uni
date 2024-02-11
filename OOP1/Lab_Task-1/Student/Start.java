public class Start {
	public static void main(String []args){
		Student s1 = new Student("Sadman", "23-52382-2", "CSE", 3.50f);
		s1.showDetails();
		
		Student s2 = new Student();
		s2.setName("Sakib");
		s2.setId("23-52394");
		s2.setDepartment("CSE");
		s2.setCgpa(3.7f);
		
		s2.showDetails();
		
		if (s2.getCgpa() >= 2.5){
			System.out.println(s2.getName() + " is not a probation student");
		}
		else {
			System.out.println(s2.getName() + " is a probation student");
		}
		
	}
}