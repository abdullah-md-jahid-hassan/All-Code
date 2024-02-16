package l6_patterns_6.pkg6_04;

import java.util.Scanner;
public class L6_patterns_66_04 {

    public static void displayPattern(int n){
        for(int i=1; i<=n; i++){
            for (int j=0; j<n-i; j++){
                System.out.print("  ");
            }
            for (int k=i; k>0; k--){
                System.out.print(k+" ");
            }
           System.out.println(); 
        }
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the Integer: ");
        int a = input.nextInt();
        displayPattern(a);
    }
    
}
