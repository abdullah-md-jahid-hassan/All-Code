package com.mycompany.l4_factors.of.int_5._04;

import java.util.Scanner;
public class L4_factorsOfInt_516_04 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter The integer: ");
        int n = input.nextInt();
        int d = 2;
        System.out.print("All smallest factors of is: ");
        while (n / d != 1) {
            if (n % d  == 0) {
                System.out.print(d + ", ");
                n /= d; 
            }
            else d++;
        }
        System.out.println(n + ".");
    }
}
