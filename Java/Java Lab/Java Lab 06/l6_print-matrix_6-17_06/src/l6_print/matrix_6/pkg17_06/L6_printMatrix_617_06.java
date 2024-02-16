package l6_print.matrix_6.pkg17_06;
import java.util.Scanner;
public class L6_printMatrix_617_06 {
    public static void printMatrix(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                System.out.print((int)(Math.random()*2)+"\t");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the Row and Colum number of Mattrix: ");
        int n = input.nextInt();
        printMatrix(n);
    }
}
