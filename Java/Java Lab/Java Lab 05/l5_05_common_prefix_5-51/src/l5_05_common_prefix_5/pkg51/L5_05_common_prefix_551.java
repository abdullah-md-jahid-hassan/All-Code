package l5_05_common_prefix_5.pkg51;

import java.util.Scanner;
public class L5_05_common_prefix_551 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the 1st string: ");
        String a = input.nextLine();
        System.out.print("Enter the 2nd string: ");
        String b = input.nextLine();
        String p = "";
        for (int i=0; a.charAt(i)==b.charAt(i); i++) p+=a.charAt(i);
        if (p.length() > 0) System.out.println("The commmon prefix is \"" + p+"\"");
        else System.out.println("\""+a + "\" and \"" + b + "\" have no commmon prefix");
    }   
}
