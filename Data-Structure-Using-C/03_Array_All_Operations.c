// Array All Operations
// Traversal
// Insertion
// Deletion
// Sorting
// Searching
// Updating

#include<stdio.h>
#include<stdlib.h>
int arr[10];
int size;
void Initialization();
void Traversal();
void Insertion();
void Deletion();
void Sorting();
void Searching();
void Updating();
void main()
{
    int choice;
    while (1)
    {
        printf("1. Initialization\n2. Traversal\n3. Insertion\n4. Deletion\n5. Sorting\n6. Searching\n7. Updating\n8. Exit\n");
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
            Sorting();
            break;
        case 6:
            Searching();
            break;
        case 7:
            Updating();
            break;
        case 8:
            exit(1);
            break;
        default:
            printf("Invalid Choice");
            continue;
        }
    }
    
}

void Initialization()
{
    printf("Enter the size of an array :");
    scanf("%d",&size);
    printf("\nEnter the Element of an array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nINSERTION SUCCESSFULLY");
}

void Traversal()
{
    printf("Array Elements are :\n");
    for (int i = 0; i < size; i++)
    {
        printf("Arr[%d] = %d\n",i,arr[i]);
    }
    printf("\nTRAVERSAL SUCCESSFULLY");
}

void Insertion()
{
    int position,element;
    printf("Enter the position of the element :");
    scanf("%d",&position);
    printf("Enter the %d position element :");
    scanf("%d",&element);
    if (position <= 0  && position > size-1)
    {
        printf("Invalid Position");
    }
    else
    {
        for (int i = size - 1; i >= position-1; i--)
        {
            arr[i] = arr[i+1];
        }
        arr[position] = element;
        printf("\nINSERTION SUCCESSFULLY");
    }
}

void Deletion()
{
    int deleting_position;
    printf("Enter the deleting position :");
    scanf("%d",&deleting_position);
    if (deleting_position <= 0 && deleting_position > size-1)
    {
        printf("Deleting Position is Invalid");
    }
    else
    {
        for (int i = deleting_position-1; i < size; i++)
        {
            arr[i+1] = arr[i];
        }
        size--;
        printf("\nDELETION SUCCESSFULLY");
    }
}

void Sorting()
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }   
        }
    } 
    printf("\nSORTING SUCCESSFULLY");
}

void Searching()
{
    int search_element;
    printf("Enter the Searching Element :");
    scanf("%d",&search_element);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search_element)
        {
            printf("Arr[%d] = %d",i,arr[i]);
        }
        else
        {
            continue;
            printf("Searching Element is not found");
        }   
    }  
    printf("\nSEARCHING SUCCESSFULLY");
}

void Updating()
{
    int updating_element,updating_value;
    printf("Enter the Updating Element :");
    scanf("%d",&updating_element);
    printf("\nEnter the Updating Value :");
    scanf("%d",&updating_value);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == updating_element)
        {
            arr[i] = updating_value;
        }
        else
        {
            printf("Updating Element is not found");
        }
    }
    printf("\nUPDATING SUCCESSFULLY");
}