import java.util.Scanner;

public class Duplicate {

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the Elements of an array :");
        int[] array = new int[5];
        for (int i = 0; i < array.length; i++) {
            array[i] = obj.nextInt();
        }

        System.out.println("Duplicate Elements in an Array : ");
        for (int i = 0; i < array.length; i++) {
            for (int j = i+1; j < array.length; j++) {
                if (array[i] == array[j]) {
                    System.out.print(array[i]+" ");
                }
            }
        }
    }
}