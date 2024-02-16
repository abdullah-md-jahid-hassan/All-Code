package daynuminmonth3.pkg11_03;

import java.util.Scanner;

public class DayNumInMonth311_03 {

    public static void main(String[] args) {
        
        System.out.print("Enter the number of month: ");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.print("The month have : ");
        switch (n){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: System.out.println("31 days."); break;
            case 4:
            case 6:
            case 9:
            case 11: System.out.println("30 days."); break;
            case 2: System.out.println("Is it leepyer? Enter 1 for YES, 0 for NO");
                int l = input.nextInt();
                switch (l){
                    case 0: System.out.println("28 days."); break;
                    case 1: System.out.println("29 days."); break;
                    default : System.out.println("Wrong input."); break;
                }
                break;
            default : System.out.println("Wrong input.");  break;
        }
    }
    
}
