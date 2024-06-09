// Pointer Basics 

#include<stdio.h>
#include<conio.h>

void main()
{
    // Variable Using

    int variable = 10;
    int *pointer_variable = &variable;

    //  Variable Value Printing
    printf("Variable Value Printing\n\n");
    printf("Variable Value case 1: %d\n",variable);
    printf("Variable Value case 2: %d\n\n\n",*pointer_variable);

    // Variable Address Printing
    printf("Variable Address Printing\n\n");
    printf("Variable Address case 1: %p\n",&variable);
    printf("Variable Address case 2: %p\n\n\n",pointer_variable);

    // Array Using

    int array[5] = {10,20,30,40,50};
    int *array_pointer_variable;
    array_pointer_variable = array;

    // Array Address Printing
    printf("Array Address Printing\n\n");
    printf("Array Address case 1: %p\n",array);
    printf("Array Address case 2: %p\n",array_pointer_variable);
    printf("Array Address case 3: %p\n\n\n",&array);

    // Pointer Address Printing
    printf("Pointer Address Printing\n\n");
    printf("Pointer Address case 1: %p = %d\n\n\n",&array_pointer_variable,*array_pointer_variable);

    // Pointer Address point to Array Values Address Increment

    printf("Pointer Address point to Array Values Address Increment\n\n");
    printf("Increment the Pointer Address case 1: %p = %d\n",array_pointer_variable++,*array_pointer_variable);
    printf("Increment the Pointer Address case 2: %p = %d\n\n\n",array_pointer_variable++,*array_pointer_variable);

    // Array Value Printing

    printf("Array Value Printing \n\n");
    printf("Array Value Print case 1: array[2] = %d\n",array[2]);
    printf("Array  Value Print Base Value case 2: %d\n",*array); // Print the Base Value
    printf("Array Value Print increment array+2 case 3: %d\n",*(array+2));
    printf("Array Value Print increment array_pointer_variable case 4: %d = %d\n\n\n",*array_pointer_variable,*(array_pointer_variable+1));

    int array_1[6] = {1,2,3,4,5,6};
    int *pointer_variable_2;
    pointer_variable = array_1;

    // New Array Using Other Method

    printf("Difference Between Two Cases :\n\n");
    printf("Address of array_1+1 :%p\n",array_1+1);   // Print base address + datatype byte size 
    printf("Address of &array_1+1 :%p\n",&array_1+1);   // base address + total array byte ->  total array byte -> 6 array size, 
						                                //4  datatype size  (6*4 = 24)

}
