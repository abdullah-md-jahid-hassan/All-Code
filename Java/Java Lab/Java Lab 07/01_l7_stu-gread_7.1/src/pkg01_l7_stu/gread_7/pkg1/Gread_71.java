package pkg01_l7_stu.gread_7.pkg1;

import java.util.Scanner;
public class Gread_71 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of students: ");
        int n = input.nextInt();
        int[] a = new int [n];
        int b = 0;
        System.out.print("Enter "+n+" scores: ");
        for (int i=0; i<n; i++){
            a[i] = input.nextInt();
            if(a[i]>b) b = a[i];
        }
        for (int i=0; i<n; i++){
            if(a[i]>=(b-10)) System.out.println("Grade is A");
            else if(a[i]>=(b-20)) System.out.println("Grade is B");
            else if(a[i]>=(b-30)) System.out.println("Grade is C");
            else if(a[i]>=(b-40)) System.out.println("Grade is D");
            else System.out.println("Grade is F");
        }
    }
    
}
