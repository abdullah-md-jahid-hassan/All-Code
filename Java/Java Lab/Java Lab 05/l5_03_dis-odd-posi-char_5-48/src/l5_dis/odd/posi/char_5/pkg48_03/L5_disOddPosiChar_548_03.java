package l5_dis.odd.posi.char_5.pkg48_03;
import java.util.Scanner;
public class L5_disOddPosiChar_548_03 {
    
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter the String: ");
        String a = input.nextLine();
        System.out.print("Odd position Characters are:");
        for(int i=0; i<a.length(); i++) if ((i+1)%2!=0) System.out.print(a.charAt(i));
    } 
}