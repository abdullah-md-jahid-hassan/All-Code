package l5_check.digit.issbn_5.pkg47_02;

import java.util.Scanner;

public class L5_checkDigitIssbn_547_02 {

  
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       System.out.print("Enter 12 Digits ISSBN: ");
       String s = input.nextLine();
       int t=0,c;
       for (int i=0; i<12 ; i++){
           int a= s.charAt(i)-48;
            if ((i+1)%2==0) 
               t+=a*3;
           else
               t+=a;
           }
       c=10-(t%10);
       System.out.print("The final ISSBN is: ");
       if (c==10) System.out.println(s+"0");
       else System.out.println(s+c);
           
    }
    
}
