public class FactorialCalculator {

    
    public static int calculateFactorial(int n) {
        int factorial = 1;
       
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        return factorial;
    }

    public static void main(String[] args) {
        
        if (args.length < 1) {
            System.out.println("Please provide a number as a command-line argument.");
            return;
        }

        try {
            
            int number = Integer.parseInt(args[0]);

            
            if (number < 0) {
                System.out.println("Factorial is not defined for negative numbers.");
                return;
            }

            
            int result = calculateFactorial(number);

            
            System.out.println("The factorial of " + number + " is " + result);
        } catch (NumberFormatException e) {
            System.out.println("Please provide a valid integer.");
        }
    }
}
