4.Factorial using a separate method:

public class FactorialMethod {
    public static int calculateFactorial(int num) {
        int factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        return factorial;
    }

    public static void main(String[] args) {
        int num = 5;
        System.out.println("Factorial: " + calculateFactorial(num));
    }
}
