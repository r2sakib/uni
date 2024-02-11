public class Start {
	public static void main (String []args) {
		Triangle t1 = new Triangle(2, 2, 2);
		t1.testTriangle();
		t1.showDetails();
		
		t1.setX(4);
		t1.testTriangle();
		t1.showDetails();
		
		t1.setY(3);
		t1.testTriangle();
		t1.showDetails();
		
	}
}