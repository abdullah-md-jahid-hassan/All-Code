package com.mycompany.l4_ascii.cha_4._01;

import java.util.Scanner;

public class L4_asciiCha_48_01 {

    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       System.out.print("Enter he ASCII code: ");
       int i = input.nextInt();
       System.out.println("The character is: "+(char)i);
    }
}