package com.mycompany.l4_student.high.num_5._02;

import java.util.Scanner;
public class L4_studentHighNum_59_02 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of students: ");
        int numberOfStudents = input.nextInt();
        int sco, hi1 = 0, hi2 = 0;
        String sn, s1="", s2="";
        System.out.println("Enter each student's name and score:");
        for (int i = 0; i < numberOfStudents; i++) {
            System.out.print("Student: " + (i + 1) + "\n\tName: ");
            sn = input.next();
            System.out.print("\tScore: ");
            sco = input.nextInt();
            if (i == 0) {
                hi1 = sco;
                s1 = sn;}
            else if (i == 1 && sco > hi1) {
                hi2 = hi1; hi1 = sco; s2 = s1; s1 = sn; }
            else if (i == 1) {
                hi2 = sco;  s2 = sn;}
            else if (i > 1 && sco > hi1 && sco > hi2) {
                hi2 = hi1;  s2 = s1; hi1 = sco; s1 = sn; }
                else if (i > 1 && sco > hi2) {
                    s2 = sn; hi2 = sco;}
        }
        System.out.println("Higest scoring student: " + s1 + 
                                       "\nSecond Higest scoring student: " + s2);
    }
}
