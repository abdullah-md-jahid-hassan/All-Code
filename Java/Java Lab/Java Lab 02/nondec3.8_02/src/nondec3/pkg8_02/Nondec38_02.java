package nondec3.pkg8_02;

import java.util.Scanner;

public class Nondec38_02 {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Three Number: ");
        int n1 = input.nextInt();
        int n2 = input.nextInt();
        int n3 = input.nextInt();
        System.out.print("The non-decreasing order: ");
        if (n1>n2 && n1>n3){
            if(n2>n3) System.out.println(n3 + ", " +  n2 + ", " + n1);
            else System.out.println(n2 + ", " +  n3 + ", " + n1);
        }
        if (n2>n1 && n2>n3){
            if(n1>n3) System.out.println(n3 + ", " +  n1 + ", " + n2);
            else System.out.println(n1 + ", " +  n3 + ", " + n2);
        }
        if (n3>n1 && n3>n2){
            if(n1>n2) System.out.println(n2 + ", " +  n1 + ", " + n3);
            else System.out.println(n1 + ", " +  n2 + ", " + n3);
        }
    }
    
}
