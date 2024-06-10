#include<stdio.h>
#include<stdlib.h>

int arr[10];
int size;
void Initialization();
void Insertion_Sort();
void Display();
void main()
{
    int choice;
    while (1)
    {
    printf("1. Initialization\n2. Insertion Sort\n3. Display\n4. exit\n");
    printf("Enter the Choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        Initialization();
        break;
    case 2:
        Insertion_Sort();
        break;
    case 3:
        Display();
        break;
    case 4:
        exit(1);
        break;
    default:
        printf("\nInvalid Choice");
        continue;
    }
    }
}

void Initialization()
{
    printf("Enter the size of an array :");
    scanf("%d",&size);
    printf("\nEnter the Elements in an array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void Insertion_Sort()
{
    int temp,j;
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && temp <= arr[j])
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = temp;
    }
}
void Display()
{
    printf("\nPrint the Array element :\t");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
}