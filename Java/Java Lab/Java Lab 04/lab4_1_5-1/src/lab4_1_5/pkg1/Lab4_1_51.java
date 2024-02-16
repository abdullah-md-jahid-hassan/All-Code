package lab4_1_5.pkg1;

import java.util.Scanner;
public class Lab4_1_51 {

    public static void main(String[] args)
    {
        Scanner input = new Scanner (System.in);
        
        System.out.print("Enter Numbers And Press '0' to see the result: ");
        int a=1,p=0,n=0;
        float t=0;
        while (a!=0)
        {
           a=input.nextInt();
           if(a>0) p++;
           else if (a<0) n++;
           t+=a;
        }
        System.out.println("The number of positives is "+p+"\nThe number of negatives is "+n+"\nThe total is "+t+"\nThe average is "+(t/(p+n)));
        
    }
    
}
