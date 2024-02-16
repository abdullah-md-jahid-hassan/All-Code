package com.mycompany.l4_sun.str_4._07;

import java.util.Scanner;

public class L4_sunStr_422_07 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter string 1st string: ");
        String s1 = input.nextLine();
        System.out.print("Enter string 2nd string: ");
        String s2 = input.nextLine();
        System.out.println(s2 + ((s1.contains(s2)) ? " is " : " is not ") + "a substring of " + s1);
    }
}
