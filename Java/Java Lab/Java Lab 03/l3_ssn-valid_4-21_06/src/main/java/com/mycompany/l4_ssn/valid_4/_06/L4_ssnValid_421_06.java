package com.mycompany.l4_ssn.valid_4._06;

import java.util.Scanner;

public class L4_ssnValid_421_06 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a SSN: ");
        String s = input.nextLine();
        if  ((s.length() == 11) && (s.charAt(3) == '-')  && (s.charAt(6) == '-') )
            System.out.println(s + " is a valid social security number");
        else 
            System.out.println(s + " is an invalid social security number");
    }
}
