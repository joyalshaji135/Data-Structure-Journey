// Basic Space Complexity Analysis

public class space_complexity_03 {
    int temp;
    public static void main(String[] args) {
        int [] arr = {10,20,30,40,50};
        int last_value;
        space_complexity_03 sp = new space_complexity_03();
        last_value = sp.Space_Complexity(arr);
        System.out.println("Temp Value is : "+last_value);
        
    }

// Space Complexity O(1)
// S = O(1)
int Space_Complexity(int []arr) // O(1)
{
    System.out.println("Print the All Elements :");
    for(int i = 0; i<5; i++) //  n * O(1)
    {
        temp = arr[i]; // O(1)
        System.out.println(temp);
    }
    return temp; // O(1)
}
}
