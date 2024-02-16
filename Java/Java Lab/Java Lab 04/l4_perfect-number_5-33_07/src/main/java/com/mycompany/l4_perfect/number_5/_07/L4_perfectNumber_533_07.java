package com.mycompany.l4_perfect.number_5._07;

public class L4_perfectNumber_533_07 {

    public static void main(String[] args) {
        
        System.out.print("The perfact numbers are: ");
        for (int i=1; i<=10000; i++){
            int t=0;
            for(int j=1; j<=i/2; j++)  if (i%j==0) t+=j;
        if (i==t) System.out.print(i+"\t");
        }
    }
}
