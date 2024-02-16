package com.mycompany.l4_n.of.poso.neg.ava_5._01;

import java.util.Scanner;
public class L4_nOfPosoNegAva_51_01 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int p=0, ne=0, a=0,n;
        double t=0;
        System.out.print("Enter an integer, the input ends if it is 0: ");
        n= input.nextInt();
        if (n==0) System.out.println("No numbers are entered except 0");
        while (n!=0){
            if (n>0) p++;
            else if (n<0) ne++;
            t+=n;
            a++;
            n= input.nextInt();
        }
        System.out.println("The number of positives is "+p+
                "\nThe number of negatives is "+ne+
                "\nThe total is "+t+
                "\nThe average is "+(t/a));
    }
}
