package com.mycompany._l7_overlode.method.mat.avarage_7.a;
import java.util.Scanner;
public class App {
    public static int average(int[] array) {
        int average = 0; 
        for (int i=0; i<array.length; i++) average += array[i];
        return average / array.length;
    }
    public static double average(double[] array) {
        double average = 0; 
        for (int i=0; i<array.length; i++) average += array[i];
        return average / array.length;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double[] values = new double[10]; 
        System.out.print("Enter ten values of double type: ");
        for (int i = 0; i < values.length; i++) values[i] = input.nextDouble();
        System.out.println("The average value: " + average(values));
    }
}
