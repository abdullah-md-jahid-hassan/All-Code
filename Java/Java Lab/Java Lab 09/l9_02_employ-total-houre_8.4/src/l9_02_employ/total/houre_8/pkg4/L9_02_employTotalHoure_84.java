package l9_02_employ.total.houre_8.pkg4;
import java.util.Scanner;
public class L9_02_employTotalHoure_84 {
    public static double totalhoures(double[][] m, int j){
        int sum = 0;
        for(int i=0; i<7; i++){
            sum+= m[j][i];
        }
        return sum;
    }
public static void main(String[] args) {
       Scanner input = new Scanner (System.in);
        System.out.print("Enter the number of Employee: ");
        int a = input.nextInt();
        double[][] arr= new double [a][7];
        System.out.println("Enter Enter the houres:\n            Sat\tSun\tMon\tTue\tWed\tThu\tFri");
        for (int i=0; i<a; i++){
            System.out.print("Employee "+i+": ");
            for (int j=0; j<7; j++) arr [i][j]= input.nextDouble();}
        System.out.println("The sum of working hours of all Employee is: ");
        for (int i=0; i<a; i++) System.out.println("Employee "+i+" : "+totalhoures(arr, i));
    }
}
