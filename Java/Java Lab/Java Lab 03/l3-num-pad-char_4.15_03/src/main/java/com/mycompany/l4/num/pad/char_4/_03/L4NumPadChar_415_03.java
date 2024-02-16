package com.mycompany.l4.num.pad.char_4._03;

import java.util.Scanner;

public class L4NumPadChar_415_03 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a letter: ");
        String s = input.nextLine();
        char c = s.charAt(0);
        if (Character.isLetter(c)){
            c = Character.toUpperCase(c);
            int n = 0;
            if (c >= 'W') n = 9;
            else if (c >= 'T') n = 8;
            else if (c >= 'P') n = 7;
            else if (c >= 'M') n = 6;
            else if (c >= 'J') n = 5;
            else if (c >= 'G') n = 4;
            else if (c >= 'D') n = 3;
            else if (c >= 'A') n = 2;
            System.out.println("The corresponding n is " + n);
        }
        else System.out.println(c + " is an invalid input");
    }
}
