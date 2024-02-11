public class Triangle {
	private int x;
	private int y;
	private int z;
	
	public Triangle(){};
	
	public Triangle(int x, int y, int z) {
		setX(x);
		setY(y);
		setZ(z);
	}
	
	public void setX(int x) {
		this.x = x;
	}
	
	public void setY(int y) {
		this.y = y;
	}
	
	public void setZ(int z) {
		this.z = z;
	}
	
	public int getX(int x) {
		return x;
	}
	
	public int getY(int y) {
		return y;
	}
	
	public int getZ(int z) {
		return z;
	}
	
	public void showDetails() {
		System.out.println("--------------------");
		System.out.println("x: " + this.x);
		System.out.println("y: " + this.y);
		System.out.println("z: " + this.z);
		System.out.println("--------------------");
	}
	
	public void testTriangle() {
		if (x == y && x == z) {
			System.out.println("Equilateral triangle");
		}
		else if ((x == y && x != z) || (x == z && x != y) || (y == z && y != x) ) {
			System.out.println("Isosceles triangle");
		}
		else if (x != y && x != z && y != z) {
			System.out.println("Scalene triangle");
		}
	}
}		
		
	
	
	
	
	