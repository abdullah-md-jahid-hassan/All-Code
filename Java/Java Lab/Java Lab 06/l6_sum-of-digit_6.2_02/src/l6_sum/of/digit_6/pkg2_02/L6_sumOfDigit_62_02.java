package l6_sum.of.digit_6.pkg2_02;

import java.util.Scanner;
public class L6_sumOfDigit_62_02 {
    
    public static int sumDigits(long n){
        int sum=0;
        while (n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       System.out.print("Enter The Number: ");
       long n = input.nextLong();
       System.out.println("The sum of the digits of "+n+" is: "+sumDigits(n));
    }
}
