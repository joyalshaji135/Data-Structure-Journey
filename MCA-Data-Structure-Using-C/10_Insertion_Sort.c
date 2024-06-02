#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int i;
    int arr[] = {6,2,1,3,5};
    int n = 5;
  
    insertionSort(arr, n);
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
  
    return 0;
}