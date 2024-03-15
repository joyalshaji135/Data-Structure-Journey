import java.util.Scanner;

public class array_operation_04_1 {
    int [] arr;
    int [] arr1 = {10,20,30,40}; 
    int size = 4;
    public static void main(String[] args) {
        array_operation_04_1 op = new array_operation_04_1();
        op.Init_Operation();
        op.Set_Operation();
    }

// Init Operation
// Time Complexity = O(n)
// Space Complexity = O(n)
// Represented By : O(n)ST
void Init_Operation() // O(1)
{
    arr = new int[10];
    System.out.println("Enter the Array Limit :");
    Scanner sc = new Scanner(System.in);
    int limit = sc.nextInt();
    System.out.println("Enter the "+limit+"Element in an Array :");
    for(int i = 0; i < limit; i++) // limit * O(i)
    {
        arr[i] = sc.nextInt();
    }

    System.out.println("Initialized Array Elements are :");
    for(int i = 0; i < size; i++) // n=limit * O(1)
    {
        System.out.println("arr1["+i+"] ==> "+arr1[i]);
    }
    System.out.println("Declared Array Element are :");
    for(int i = 0; i < limit; i++)  // n=limit * O(1)
    {
        System.out.println("arr["+i+"] ==> "+arr[i]);
    }
}

// Set Operation
// Time Complexity = O(1)
// Space Complexity = O(1)
// Represented By = O(1)ST
void Set_Operation() // O(1)
{
    int pos,value;   // O(1)
    System.out.println("Enter the Position of the Array :");
    Scanner sc = new Scanner(System.in);
    pos = sc.nextInt();
    System.out.println("Which Value is "+pos+" position Inserted :");
    value = sc.nextInt();

    // Set Operation Perform
    arr1[pos] = value; // O(1)
    // for(int i = 0; i < size; i++) O(n) = Time Complexity
    // {
    //     System.out.println("arr1["+i+"] ==> "+arr1[i]);
    // }
    System.out.println("arr1["+pos+"] ==> "+arr1[pos]); // O(1)
}


}

