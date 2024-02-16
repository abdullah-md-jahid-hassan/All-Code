package l6_palindrome_6.pkg3_03;

import java.util.Scanner;
public class L6_palindrome_63_03 {

    public static int reverse(int number){
        int r=0;
        while (number!=0){
            r=(r*10)+(number%10);
            number/=10;
        }
        return r;
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter The Number: ");
        int a = input.nextInt();
        if (a==reverse(a)) System.out.print("The Number "+a+" is palindrome.");
        else System.out.println("The Number "+a+" is not palindrome.");
    } 
}
