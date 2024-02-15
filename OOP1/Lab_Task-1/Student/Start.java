import java.util.Scanner;

public class Start {

	public static void main(String []args){
		Scanner sc = new Scanner(System.in);
		Scanner scStr = new Scanner(System.in);

		Student s1 = new Student( scStr.nextLine(), scStr.nextLine(), scStr.nextLine(), sc.nextFloat() );
		s1.showDetails();
		
		Student s2 = new Student();
		s2.setName(scStr.nextLine());
		s2.setId(scStr.nextLine());
		s2.setDepartment(scStr.nextLine());
		s2.setCgpa(sc.nextFloat());
		
		s2.showDetails();
		
		if (s2.getCgpa() >= 2.5){
			System.out.println(s2.getName() + " is not a probation student");
		}
		else {
			System.out.println(s2.getName() + " is a probation student");
		}
		
	}
}