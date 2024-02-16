package com.mycompany.l4_gcd.num_5._03;

import java.util.Scanner;
public class L4_gcd2num_514_03 {

    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       System.out.print("Enter two numbers: ");
       int a= input.nextInt();
       int b= input.nextInt();
       int g=1, c= a<b? a:b;
       for(int i=c; i>0; i--) if(a%i==0 && b%i==0) {g=i; break;}
       System.out.println("The GCD of "+a+", "+b+" is "+g);
    }
}
