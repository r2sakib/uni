import java.util.Scanner;

public class Start {
	public static void main (String []args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter number of triangles: ");
		int size = sc.nextInt();

		Triangle triangles[] = new Triangle[size];

		for (int i = 0; i < size; i++) {
			System.out.print("Enter the side lengths for triangle " + (i+1) + ": ");
			triangles[i] = new Triangle(sc.nextInt(), sc.nextInt(), sc.nextInt());
		}

		for (int i = 0; i < size; i++) {
			System.out.println("Information for triangle "+(i+1));
			triangles[i].showDetails();
		}
		
	}
}