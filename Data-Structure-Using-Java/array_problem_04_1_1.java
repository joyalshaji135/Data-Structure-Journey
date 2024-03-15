import java.util.Scanner;

public class array_problem_04_1_1 {
    public static void main(String[] args) {
        int [] arr;
        arr = new int[5];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Elements of an Array :");
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the Target Value :");
        int target = sc.nextInt();
        array_problem_04_1_1 obj_1 = new array_problem_04_1_1();
        int[] result = obj_1.Target_Function(arr,target);
        for (int i = 0; i < result.length; i++) {
            System.out.println(result[i]);
        }

    }

    // Problem Solution
    public static int[] Target_Function(int[] arr,int target)
    {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                if (arr[i] + arr[j] == target  ) {
                  return new int[]{arr[i], arr[j]};
                }
            }
        }
        return new int[0];
    }
}
