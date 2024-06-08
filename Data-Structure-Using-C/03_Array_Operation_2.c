// Insertion Array Operation

#include<stdio.h>
#include<stdlib.h>
int arr[10];
int size;
void Initialization();
void Traversal();
void Insertion();
void main()
{
    int choice;
    while (1)
    {
        printf("1. Initialization\n2. Traversal\n3. Insertion\n4. exit");
        printf("\nEnter Your Choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Initialization();
            break;
        case 2:
            Traversal();
            break;
        case 3:
            Insertion();
            break;
        case 4:
            exit(1);
        default:
            printf("You are Entered Invalid number");
            continue;
        }
    }   
}
void Initialization()
{
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the elements of an array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }   
}

void Traversal()
{
    printf("Array Values are :\n");
    for (int i = 0; i < size; i++)
    {
        printf("Arr[%d] = %d\n",i,arr[i]);
    }
}

void Insertion()
{
    int position,element;
    printf("Enter Array Position :");
    scanf("%d",&position);
    printf("\nEnter %d Array Value :",position);
    scanf("%d",&element);
    for (int i = size-1; i >= position-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[position - 1] = element;
    size++;
}