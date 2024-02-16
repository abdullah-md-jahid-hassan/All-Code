package l6_print.chr.pre.lin_6.pkg12_05;

public class L6_printChrPreLin_612_05 {

    public static void printChars(char ch1, char ch2, int numberPerLine){
        int l=1;
        for (char i=ch1; i<=ch2; i++){
            System.out.print(i+"\t");
            if (l%numberPerLine==0) {
                System.out.println();
            }
            l++;
        }
    }
    public static void main(String[] args) {
        printChars('1', 'Z', 10);
    }
    
}
