// Deletion Array Operation

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int arr[10];
int size;
void Initialization();
void Traversal();
void Insertion();
void Deletion();
void main()
{
    int choice;
    while (1)
    {
        printf("1. Initialization\n2. Traversal\n3. Insertion\n4. Deletion\n5. exit\n");
        printf("Enter Your Choice :");
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
            Deletion();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Invalid choice");
            continue;
        }
    }   
}

void Initialization()
{
    printf("\nEnter the size of an array :");
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

void  Insertion()
{
    int position,element;
    printf("Enter the Inserting Position :");
    scanf("%d",&position);
    printf("\nEnter %d Position Inserting Value :",position);
    scanf("%d",&element);
    for (int i = size-1; i >= position-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[position - 1] = element;
    size++;
}
void Deletion()
{
    int deleting_position;
    printf("Enter the Deleting Position :");
    scanf("%d",&deleting_position);
    // pos {0,1,2,3,4,5}
    // arr {1,2,3,4,5,6}  deleting = 3 size = 7
    for (int i = deleting_position-1; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
}