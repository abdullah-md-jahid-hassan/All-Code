package com.mycompany.text.coder_01a;
import java.util.Scanner;
import java.util.LinkedList;
public class TextCoder_01a {
    
    static void encode (String s, String p){
        LinkedList<Character> r = new LinkedList<>();
        int[] po = {((int)p.charAt(0))%10, ((int)p.charAt(1))%10, ((int)p.charAt(2))%10, ((int)p.charAt(3))%10, ((int)p.charAt(4))%10};
        for (int i=0; i<s.length(); i++){
            if (r.size()==(int)po[0]){
                r.add((char)(33+(Math.random()*94)));
                System.out.println(r.get(i));
               po[0]+=6;
               //if (po[0]>=s.length()) po[0]=s.length()-(p.charAt(0)%10)-1;
               i--;
            }
            else {r.add((char)(((((int)s.charAt(i))*(((int)(p.charAt(0)))/((int)p.charAt(1)))+((int)(p.charAt(2)-p.charAt(3))))%94)+33));
            System.out.println(r.get(i));
            }
        }
        System.out.print("Your Encoded massage is: "+(char)(33+(Math.random()*94)));
        for (int i=0; i<r.size(); i++) System.out.print(r.get(i));
        System.out.println("");
    }
    
    static void decode (String s, String p){
         LinkedList<Character> r = new LinkedList<>();
        int[] po = {((int)p.charAt(0))%10, ((int)p.charAt(1))%10, ((int)p.charAt(2))%10, ((int)p.charAt(3))%10, ((int)p.charAt(4))%10};
        for (int i=1; i<s.length(); i++){
            if (i==(int)po[0]){
                po[0]+=6;
               //if (po[0]>=s.length()) po[0]=s.length()-(p.charAt(0)%10)-1;
            }
            else {
                double m=1.5;
                int t = ((int)s.charAt(i))-(((int)(p.charAt(2)-p.charAt(3)))+33);
                for (int j=1; m==(int)m; j++) m= (94*j-1)/(((((int)p.charAt(0))*((int)p.charAt(1)))%94)+33);
                if (t<0) t+=94;
                r.add((char)((t*m)%94));
            }
        }
        System.out.print("Your Encoded massage is: ");
        for (int i=0; i<r.size(); i++) System.out.print(r.get(i));
        System.out.println("");
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
