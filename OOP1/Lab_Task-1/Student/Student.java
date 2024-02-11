public class Student {
	private String name;
	private String id;
	private String department;
	private float cgpa;
	
	public Student(){};
	
	public Student(String name, String id, String department, float cgpa){
		setName(name);
		setId(id);
		setDepartment(department);
		setCgpa(cgpa);
	}
	
	public void setName(String name){
		this.name = name;
	}
	
	public void setId(String id){
		this.id = id;
	}
	
	public void setDepartment(String department){
		this.department = department;
	}
	
	public void setCgpa(float cgpa){
		if (cgpa >= 0 && cgpa <= 4){
			this.cgpa = cgpa;
		}
		else {
			System.out.println("Invalid CGPA");
		}
	}
	
	public String getName() {
		return this.name;
	}
	
	public String getId() {
		return this.id;
	}
	
	public String getDepartment() {
		return this.department;
	}
	
	public float getCgpa() {
		return this.cgpa;
	}
	
	public void showDetails() {
		System.out.println("-----------------------------");
		System.out.println("Name: " + this.name);
		System.out.println("ID: " + this.id);
		System.out.println("Department: " + this.department);
		System.out.println("CGPA: " + this.cgpa);
		System.out.println("-----------------------------");
	}
		
}