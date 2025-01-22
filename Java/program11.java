import java.util.Scanner;

public class GradingSystem {

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        
       
        System.out.print("Enter the total marks: ");
        int totalMarks = scanner.nextInt();
        
        System.out.print("Enter the marks obtained: ");
        int marksObtained = scanner.nextInt();
        
        
        double percentage = (double) marksObtained / totalMarks * 100;
        
        
        System.out.println("Percentage: " + percentage + "%");
        
       
        if (percentage >= 90) {
            System.out.println("Grade: A");
        } else if (percentage >= 80) {
            System.out.println("Grade: B");
        } else if (percentage >= 70) {
            System.out.println("Grade: C");
        } else if (percentage >= 60) {
            System.out.println("Grade: D");
        } else {
            System.out.println("Grade: F");
        }
        
        
        scanner.close();
    }
}
