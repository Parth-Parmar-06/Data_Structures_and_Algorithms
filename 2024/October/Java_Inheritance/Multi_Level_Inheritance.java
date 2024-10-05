class Person {
    String name;
    int age;
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    void displayPersonalDetails() {
        System.out.println("Name: " + name + "\nAge: " + age);
    }
}
class Employee extends Person {
    String employeeId;
    String department;
    Employee(String name, int age, String employeeid, String department) {
        super(name, age);
        this.employeeId = employeeid;
        this.department = department;
    }
    void displayEmployeeDetails() {
        super.displayPersonalDetails();
        System.out.println("Employee ID: " + employeeId + "\nDepartment: " + department);
    }
}
class Manager extends Employee {
    int teamSize;
    String project;
    Manager(String name, int age, String employeeid, String department, int teamSize, String project) {
        super(name, age, employeeid, department);
        this.teamSize = teamSize;
        this.project = project;
    }
    void displayManagerDetails() {
        super.displayEmployeeDetails();
        System.out.println("Team Size: " + teamSize + "\nProject: " + project);
    }
}
public class Multi_Level_Inheritance {
    public static void main(String args[]) {
        Person p = new Person("Parth Parmar", 18);
        // p.displayPersonalDetails();
        Employee e = new Employee("Parth Parmar", 18, "P009", "Research n Development");
        // e.displayEmployeeDetails();
        Manager m = new Manager("Parth Parmar", 18, "P009", "Research n Development", 4, "Image Processing System");
        m.displayManagerDetails();
    }
}