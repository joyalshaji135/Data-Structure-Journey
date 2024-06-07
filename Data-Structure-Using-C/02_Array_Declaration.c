#include<stdio.h>
#include<stdlib.h>
void Display(int size,int []);
int main()
{
    int arr[50];
    int size;
    printf("Enter the Size of Array :");
    scanf("%d",&size);
    printf("\nEnter the Elements of Array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    Display(size,arr);
    
    
    return 0;
}
void Display(int size, int arr[])
{
    printf("Array Values are :\n");
    for (int i = 0; i < size; i++)
    {
        printf("Arr[%d] = %d\n",i,arr[i]);
    }
}