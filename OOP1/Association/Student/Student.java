public class Student {
	private String name;
	private String id;
	private String department;
	private float cgpa;
	private StudentIDCard idCard;
	
	public Student(){};
	
	public Student(String name, String id, String department, float cgpa){
		setName(name);
		setId(id);
		setDepartment(department);
		setCgpa(cgpa);
	}

	public Student(String name, String id, String department, float cgpa, StudentIDCard idCard){
		setName(name);
		setId(id);
		setDepartment(department);
		setCgpa(cgpa);
		setIdCard(idCard);
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

	public void setIdCard(StudentIDCard idCard) {
		this.idCard = idCard;
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

	public StudentIDCard getIdCard() {
		return this.idCard;
	}
	
	public void showDetails() {
		System.out.println("-----------------------------");
		System.out.println("Name: " + this.name);
		System.out.println("ID: " + this.id);
		System.out.println("Department: " + this.department);
		System.out.println("CGPA: " + this.cgpa);

		if (idCard != null) {
			System.out.println("\nID CARD DETAILS");
			idCard.showDetails();
		} else {
			System.out.println("\nNO ID CARD ISSUED.");
		}

		System.out.println("-----------------------------");
	}
		
}