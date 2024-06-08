// Array Operation are 5 Types
// 1. Traversal
// 2. Insertion
// 3. Deletion
// 4. Searching
// 5. Sorting

// Traversal Operation 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Initialization();
void Traversal();
int arr[100];
int size;
int main()
{

    int choice;
    while (1)
    {
        printf("Traversal Operation\n");
        printf("1. Initialization \n 2. Traversal\n3.exit");
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
            exit(1);
            break;
        default:
            printf("Incorrect Value Entered\n");
            continue;
        }
    }

return 0;
}

void Initialization()
{
    printf("Enter the Size of an Array :");
    scanf("%d",&size);
    printf("Enter the Elements in an Array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
}

void Traversal()
{
    printf("Array Values :\n");
    for (int i = 0; i < size; i++)
    {
        printf("Arr[%d] = %d\n",i,arr[i]);
    }
    
}