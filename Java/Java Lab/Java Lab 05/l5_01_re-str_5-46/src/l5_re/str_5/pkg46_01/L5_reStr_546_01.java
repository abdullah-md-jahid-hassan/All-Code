package l5_re.str_5.pkg46_01;

 import java.util.Scanner;

public class L5_reStr_546_01 {

    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       System.out.print("Enter a sting: ");
       String s = input.nextLine();
       System.out.print("The reverse sting is: ");
       for ( int i=s.length()-1 ; i>=0 ; i--) System.out.print(s.charAt(i));
       System.out.println();
       
    }
    
}
