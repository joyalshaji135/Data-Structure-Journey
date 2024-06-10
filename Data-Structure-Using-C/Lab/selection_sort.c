#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int arr[10];
int size;
void Initialization();
void Selection_Sort();
void Display();
void main()
{
    int choice;
    while (1)
    {
    printf("1. Initialization\n2. Selection Sort Process\n3. Result Display (or) Values\n4. Exit\n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        Initialization();
        break;
    case 2:
        Selection_Sort();
        break;
    case 3:
        Display();
        break;
    case 4:
        exit(1);
        break;
    
    default:
        printf("Invalid Choice\n");
        continue;
    }
    }
}

void Initialization()
{
    printf("Enter the size of an array :");
    scanf("%d",&size);
    printf("\nEnter the Elements of an array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void Selection_Sort()
{
    int min,temp;
    for (int i = 0; i < size-1; i++)
    {
        min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        
    }
}

void Display()
{
    printf("Sorted Array :\t");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}