package l5_06_sum.of.digits_6.pkg2;

import java.util.Scanner;
public class L5_06_sumOfDigits_62 {

    public static int sumDigits(long n){
        int s=0;
        for (long i=n; i!=0; i/=10) s+= i%10;
        return s;
    }
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       System.out.print("Enter the Integer: ");
        long a = input.nextInt();
        System.out.println("The sum of all digit in "+ a + " = "+sumDigits(a));
    }
    
}
