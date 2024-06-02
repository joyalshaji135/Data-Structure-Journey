// Array Basic Operation in Data Structure Using C

#include<stdio.h>
#include<stdlib.h>

void Display(int [],int size);
void Insert(int [],int size);
void Delete(int [],int size);
// void Update(int [],int size);
// void Sort(int [],int size);

int main()
{
    int arr[100];
    int limit,choice;
    
    printf("Enter the Limit of the Array :");
    scanf("%d",&limit);
    printf("Enter the Elements in an Array :");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d",&arr[i]);
    }

    while (1)
    {
        printf("\n1. Display All Elements\n");
        printf("\n2. Insert Element in an Array\n");
        printf("\n3. Delete Element in an Array\n");
        printf("\n4. Update Element in an Array\n");
        printf("\n5. Sort the Array Elements\n");
        printf("\n6. Exit\n");

        printf("Enter Your Choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Display(arr,limit);
            break;
        case 2:
            Insert(arr,limit);
            break;
        case 3:
            Delete(arr,limit);
            break;
        // case 4:
        //     Update(arr,limit);
        //     break;
        // case 5:
        //     Sort(arr,limit);
        //     break;
        case 6:
            exit(1);
            break;
        default:
        printf("Incorrect Key is Entered");
            continue;
        }
    }
    return 0;
    
}

// Display Array Elements
void Display(int arr[],int size)
{
    printf("All Array Elements:\t");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}

// Insert Particular Position

void Insert(int arr[],int size)
{
    int pos,element;
    printf("Inserting Position :");
    scanf("%d",&pos);

    printf("\nInserting Element :");
    scanf("%d",&element);
    for (int i = size-1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
    
    printf("\nNew Array :\t");
    for (int i = 0; i <= size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}

void Delete(int arr[],int size)
{
    int delete;
    printf("Enter Deleting Element :");
    scanf("%d",&delete);

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==delete)
        {
            for (int j = i; j < size; j++)
            {
                arr[j] = arr[j+1];
            }
            size--;
        }   
    }

    printf("\nNew Array :\t");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
}