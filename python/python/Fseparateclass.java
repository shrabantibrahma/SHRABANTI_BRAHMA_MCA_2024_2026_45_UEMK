5.Factorial using a separate class and method:

class FactorialUtil {
    public int calculateFactorial(int num) {
        int factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        return factorial;
    }
}

public class FactorialClass {
    public static void main(String[] args) {
        FactorialUtil util = new FactorialUtil();
        int num = 5;
        System.out.println("Factorial: " + util.calculateFactorial(num));
    }
}


