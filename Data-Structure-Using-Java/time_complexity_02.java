// Basic Time Complexity 

public class time_complexity_02 {
    public static void main(String[] args) 
    {
        int [] arr = {10,20,30,40};
        int sum,value;
        time_complexity_02 obj_1 = new time_complexity_02();
        sum = obj_1.Time_Complexity_1(arr);
        value = obj_1.Time_Complexity_2(arr);
        System.out.println("Sum of Array :"+sum);
        System.out.println("Array of [1] = "+value);
    } 
// Time Complexity O(n) 
// O(1) + (n * O(1)) + O(1)
// T = O(n) 
int Time_Complexity_1(int arr[]) // O(1)
{
   int sum=0,n=4;
   for(int i=0; i<n; i++)  //  n * O(1)
   {
        sum = sum + arr[i];
   }
   return sum;   // O(1)
}
// Time Complexity O(1)
// O(1) + O(1) + O(1)
// T = O(1)
int Time_Complexity_2(int arr[]) // O(1)
{
    int value;
    value = arr[1]; // O(1)
    return value;   // O(1)
}
}



    
