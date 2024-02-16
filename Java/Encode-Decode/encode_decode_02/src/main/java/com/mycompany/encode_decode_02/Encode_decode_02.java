package com.mycompany.encode_decode_02;
import java.util.Scanner;
public class Encode_decode_02 {
    
    static void encode (String s, String p){
        char[] c= s.toCharArray();
        for (int i=0,j=0; i<s.length(); i++,j++){
            int tc = ((int)c[i]), tp = ((int)p.charAt(i));
            c[i] = (char)(((tc*tp+tp)%94)+33);
            if (j==s.length()-1) j=-1;
        }
        System.out.print("Your Encoded massage is: "+(char)(33+(Math.random()*94)));
        for(int i=0; i<c.length; i++) System.out.print(c[i]);
    }
    
    static void decode (String s, String p){
        char[] c= s.toCharArray();
        for (int i=0,j=0; i<s.length(); i++,j++){
            int tc = ((int)c[i]), tp = ((int)p.charAt(i));
            tc-=(33-tp);
            double m=1.5;
            for (int k=1; m==(int)m; k++) m= (94*k-1)/tp;
            c[i]= (char)((tc*m)%94);
            if (j==s.length()-1) j=-1;
        }
        System.out.print("Your Encoded massage is: "+(char)(33+(Math.random()*94)));
        for(int i=0; i<c.length; i++) System.out.print(c[i]);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your massage: ");
        String s = input.nextLine();
        System.out.print("Enter passwoard: ");
        String p = input.nextLine();
        System.out.print("1| Encode.\n2|Decode.\nEnter your choice: ");
        int c= input.nextInt();
        switch (c){
            case 1: encode (s, p); break;
            case 2: decode (s, p); break;
        }
    }
}
