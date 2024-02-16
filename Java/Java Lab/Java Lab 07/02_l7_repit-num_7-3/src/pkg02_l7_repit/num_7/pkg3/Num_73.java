package pkg02_l7_repit.num_7.pkg3;

import java.util.Scanner;
public class Num_73 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] c = new int[101];
        int n;
        System.out.print("Enter the integers between 1 and 100: ");
        do {
            n = input.nextInt();
            if (n>0&&n<101) c[n]++;
        }
        while(n!=0);
        for(int i=0; i<101; i++){
            if(c[i]>0)System.out.println(i+" occurs "+c[i]+" times.");
        }
    }
    
}
