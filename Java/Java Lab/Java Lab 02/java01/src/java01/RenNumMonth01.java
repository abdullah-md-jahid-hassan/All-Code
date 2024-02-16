package java01;
public class RenNumMonth01 {
    
    public static void main(String[] args)
    {
        int a= ((int) (Math.random() * 100)) % 13;
       switch (a) {
           case 1: System.out.println("January");break;
           case 2:System.out.println("Ferbruary");break;
           case 3:System.out.println("March");break;
           case 4:System.out.println("April");break;
           case 5:System.out.println("May");break;
           case 6:System.out.println("Jun");break;
           case 7:System.out.println("July");break;
           case 8:System.out.println("Augast");break;
           case 9:System.out.println("September");break;
           case 10:System.out.println("Octobore");break;
           case 11:System.out.println("Nobember");break;
           case 12:System.out.println("December");break;
       }
    }
    
}
