package l5_vowel.num_5.pkg49_04;

import java.util.Scanner;
public class L5_vowelNum_549_04 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int v = 0;
        System.out.print("Enter a string: ");
        String a = input.nextLine();
        a = a.toUpperCase();
        for(int i=0; i<a.length(); i++){
            char b = a.charAt(i);
            if (b=='A'||b=='E'||b=='I'||b=='O'||b=='U') v++;
        }
        System.out.println("The number of vowels is: "+v+
                "\nThe number of consonants is: "+(a.length()-v));      
    }
    
}
