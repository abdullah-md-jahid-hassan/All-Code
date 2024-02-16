package com.mycompany._l7_array.increasing.order_7_19a;
import java.util.Scanner;
public class App {
    public static boolean isSorted(int[] list) {
        for (int i = 0; i < list.length - 1; i++) {
            if (list[i] > list[i + 1]) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter lenth of list: ");
        int[] list = new int[input.nextInt()];
        System.out.print("Enter list: ");
        for (int i = 0; i < list.length; i++) list[i] = input.nextInt();
        System.out.println("The list is " + (isSorted(list) ? "already " : "not ") + "sorted");
    }
}
