import java.util.Scanner;

public class Insertion_Sort {
    public static void main(String[] args) {
        System.out.println("Enter the Elements of an Array :");
        Scanner sc = new Scanner(System.in);
        int[] array  = new int[5];
        for (int i = 0; i < array.length; i++) {
            array[i] = sc.nextInt();
        }

        System.out.print("Before Array Values\t");
        for (int i = 0; i < array.length; i++) {
            System.out.print("\t"+array[i]);
        }

        for (int i = 0; i < array.length; i++) {
            int temp = array[i];
            int j = i-1;

            while (j >= 0 && temp <= array[j]) {
                array[j+1] = array[j];
                j = j-1;
            }
            array[j+1] = temp;
        }

        System.out.print("After Sorted Array :\t");
        for (int i = 0; i < array.length; i++) {
            System.out.print("\t"+array[i]);            
        }
    }
}
