
public class FactorialCalculator {

    
    public int calculateFactorial(int n) {
        int factorial = 1;
        
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        return factorial;
    }

    public static void main(String[] args) {
        
        FactorialCalculator calculator = new FactorialCalculator();
        
        
        int number = 6;

        
        int result = calculator.calculateFactorial(number);

        
        System.out.println("The factorial of " + number + " is " + result);
    }
}
