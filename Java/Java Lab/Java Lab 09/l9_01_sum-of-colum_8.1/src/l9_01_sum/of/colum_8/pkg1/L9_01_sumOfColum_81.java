package l9_01_sum.of.colum_8.pkg1;
import java.util.Scanner;
public class L9_01_sumOfColum_81 {
    public static double sumColumn(double[][] m, int columnIndex){
        int sum = 0;
        for(int i=0; i<(m.length); i++){
            sum+= m[i][columnIndex-1];
        }
        return sum;
    } 
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter Size of Array(row, column): ");
        int a = input.nextInt();
        int b = input.nextInt();
        double[][] arr= new double [a][b];
        System.out.println("Enter Enter the Mattrix:");
        for (int i=0; i<a; i++) {
            for (int j=0; j<b; j++) {
                arr [i][j]= input.nextDouble();
            }
            System.out.println();
        }
        System.out.print("Enter the column number: ");
        int c= input.nextInt();
        System.out.print("The sum of all element in Column "+c+" is: "+sumColumn(arr, c));
    }
}
