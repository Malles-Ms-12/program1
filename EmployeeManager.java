import java.util.*;
public class Main {
    static class Employee {
        private static int counter = 1001; 
        int employeeId;
        String name;
        int mSalary;
        int aSalary; 
        public Employee() {
            Scanner sc = new Scanner(System.in);
            this.employeeId = counter++; 
            System.out.print("Enter Name: ");
            this.name = sc.nextLine(); 
            System.out.print("Enter Monthly Salary: ");
            this.mSalary = sc.nextInt(); 
            this.aSalary = this.mSalary * 12;
        }
        public void displayDetails() {
            System.out.println("Employee ID: " + employeeId);
            System.out.println("Employee Name: " + name);
            System.out.println("Annual Salary: " + aSalary);
        }
    }
    public static void main(String[] args) {
        Employee[] emp = new Employee[3];
        for(int i = 0; i < 3; i++) {
            emp[i] = new Employee();
            System.out.println(); 
        }
        System.out.println("--- Output ---");
        for(int i = 0; i < 3; i++) {
            emp[i].displayDetails();
            System.out.println(); 
        }
    }
}
