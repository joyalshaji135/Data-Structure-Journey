import java.util.Scanner;

public class Insertion_Sort {
    public static void main(String[] args) {
        System.out.println("Enter the Elements of an Array :");
        Scanner sc = new Scanner(System.in);
        int[] array  = new int[5];
        for (int i = 0; i < array.length; i++) {
            array[i] = sc.nextInt();
        }

        System.out.println("");
    }
}
