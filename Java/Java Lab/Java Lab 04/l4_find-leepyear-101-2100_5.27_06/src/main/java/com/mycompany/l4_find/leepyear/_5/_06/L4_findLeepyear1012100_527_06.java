package com.mycompany.l4_find.leepyear._5._06;

public class L4_findLeepyear1012100_527_06 {

    public static void main(String[] args) {
        int l=0,n=0;
        for(int i=104; i<2100;i+=4){
            if (i%100==0 && i%400==0){
                System.out.print(i+" ");
                l++; n++;
            }
            else if (i%100!=0 && i%4==0){
                System.out.print(i+" ");
                l++; n++;
            }
            if (l%10==0) System.out.print("\n");
        }
         System.out.println("\nThere are total "+n+" leep-year in between 101 to 2100");
    }
}
