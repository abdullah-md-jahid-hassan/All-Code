package com.mycompany.l4_vowel.conso_4._02;

import java.util.Scanner;

public class L4_vowelConso_413_02 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a letter: ");
        String s = input.nextLine();
        char c = s.charAt(0);
        if (Character.isLetter(c)){
            switch(Character.toUpperCase(c)){
                case 'A', 'E', 'I', '0', 'U' -> System.out.println(c + " is a vowel");
                default -> System.out.println(c + " is a consonant"); 
              }
          }
        else
            System.out.println(c + " is an invalid input");
    }
}
