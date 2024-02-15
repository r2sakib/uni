import java.util.Scanner;

public class Start {
	public static void main (String []args) {
		Scanner sc = new Scanner(System.in);

		Triangle t1 = new Triangle( sc.nextInt(), sc.nextInt(), sc.nextInt() );
		t1.testTriangle();
		t1.showDetails();
		
		t1.setX(sc.nextInt());
		t1.testTriangle();
		t1.showDetails();
		
		t1.setY(sc.nextInt());
		t1.testTriangle();
		t1.showDetails();
		
	}
}