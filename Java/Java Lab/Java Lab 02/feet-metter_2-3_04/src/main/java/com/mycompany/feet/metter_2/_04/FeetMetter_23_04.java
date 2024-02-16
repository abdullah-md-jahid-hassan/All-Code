package com.mycompany.feet.metter_2._04;

import java.util.Scanner;

public class FeetMetter_23_04 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the lenth in Feet: ");
        double f = input.nextDouble();
        double m = f*0.305;
        System.out.println("The lenth in metter is: "+m);
    }
}
