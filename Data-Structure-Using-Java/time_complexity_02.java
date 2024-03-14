// Basic Time Complexity 

public class time_complexity_02 {
    public static void main(String[] args) 
    {
        int [] arr = {10,20,30,40};
        int [][] arr1 = {{10,20},{30,40}};
        int sum1,value,sum2;
        time_complexity_02 obj_1 = new time_complexity_02();
        sum1 = obj_1.Time_Complexity_1(arr);
        value = obj_1.Time_Complexity_2(arr);
        sum2 = obj_1.Time_Complexity_3(arr1);
        System.out.println("O(n) : Sum of Array :"+sum1);
        System.out.println("O(1) : Array of [1] = "+value);
        System.out.println("O(n^2) : Sum of Nested For Loop :"+sum2);
    } 
// Time Complexity O(n) 
// O(1) + (n * O(1)) + O(1)
// T = O(n) 
int Time_Complexity_1(int []arr) // O(1)
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
int Time_Complexity_2(int []arr) // O(1)
{
    int value;
    value = arr[1]; // O(1)
    return value;   // O(1)
}
// Time Complexity O(n^2)
// O(1) + (n * O(1) + n * O(1)) + O(1)
// T = O(n^2)
int Time_Complexity_3(int [][]arr) //  O(1)
{
    int sum = 0;
    int n=2;
    for(int i=0; i<n; i++)   //  n * O(1)
    {
        for(int j=0; j<n; j++)  //  n * O(1)
        {
            sum = sum + arr[i][j];
        }
    }
    return sum;   //  O(1)
}
}



    
