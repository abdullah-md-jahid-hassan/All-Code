package com.mycompany._practice;

import java.util.Scanner;
public class App {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int c = 0;
        while (1==1){
            String a = input.nextLine();
            String[] w = a.split("\\s+");
            c+= w.length;
        System.out.println("\n\n"+c);
        }
    }
}