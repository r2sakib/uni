import java.util.Scanner;

public class Start {

	public static void main(String []args){
		Scanner sc = new Scanner(System.in);
		Scanner scStr = new Scanner(System.in);

		System.out.print("Enter number of studens: ");
		int size = sc.nextInt();

		Student students[] = new Student[size];

		for (int i = 0; i < size; i++) {
			System.out.println("Enter information for student " + (i+1));

			students[i] = new Student();

			System.out.print("Name: ");
			students[i].setName(scStr.nextLine());

			System.out.print("ID: ");
			students[i].setId(scStr.nextLine());

			System.out.print("Department: ");
			students[i].setDepartment(scStr.nextLine());

			System.out.print("CGPA: ");
			students[i].setCgpa(sc.nextFloat());
		}

		for (int i = 0; i < size; i++) {
			System.out.println("Information for student " + (i+1));
			students[i].showDetails();
		}
		
	}
}