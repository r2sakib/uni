public class StudentList {
    private Student[] students;

    public StudentList() {}

    public StudentList(int length) {
        students = new Student[length];
    }

    public boolean insert(Student student) {
        boolean msg = false;
        for (int i = 0; i < students.length; i++) {
            if (students[i] == null) {
                students[i] = student;
                msg = true;
                break;
            }
        }
        return msg;
    }

    public boolean remove(String id) {
        boolean msg = false;
        for (int i = 0; i < students.length; i++) {
            if (students[i] != null) {
                if (students[i].getId().equals(id)) {
                    students[i] = null;
                    msg = true;
                    break;
                }
            }
        }
        return msg;
    }

    public void showAll() {
        for (int i = 0; i < students.length; i++) {
            if (students[i] != null) {
                students[i].showDetails();
            }
        }
    }

    public Student getStudent(String id) {
        Student student = null;
        for (int i = 0; i < students.length; i++) {
            if (students[i] != null) {
                if (students[i].getId().equals(id)) {
                    student = students[i];
                    break;
                }
            }
        }
        return student;
    }




}
