package l6_pentagonal.num_6.pkg1_01;

public class L6_pentagonalNum_61_01 {

   public static int getPentagonalNumber(int n){return n*(3*n-1)/2;}
    
    public static void main(String[] args) {
        System.out.println("The first 100 Pentagonal Numbers are(n=0-99): ");
        for(int i=0; i<100; i++){
             System.out.print(getPentagonalNumber(i)+"\t");
             if (i%10==0)  System.out.println();
        }
        System.out.println();
    }
}
 