// Values inserting in Pointer Using

#include<stdio.h>
#include<conio.h>

void main()
{
    int array[5];
    int *pointer_variable = array;

    printf("Enter the Element in an Array :");
    for (int i = 0; i < sizeof(array)/4; i++)
    {
        scanf("%d",&pointer_variable[i]);
        // scanf("%d",(array+i)); -> Working
    }
    
    printf("Print the Array Elements : \t");
    for (int i = 0; i < sizeof(array)/4; i++)
    {
        // printf("%d\t",*(pointer_variable+i)); -> Working  (*(i+pointer_variable))
        // printf("%d\t",*(array+i)); -> Working  (*(i+array))
        // printf("%d\t",pointer_variable[i]);  -> Working
        // printf("%d\t",i[array]); -> Working
        printf("%d\t",i[pointer_variable]);

        
    }
    
}