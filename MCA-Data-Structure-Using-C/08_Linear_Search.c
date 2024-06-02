// Linear Search in C

#include <stdio.h>

int search(int array[], int n, int x) {
  
  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int array[100];
  int search_element,size;
  printf("Enter the size of an Array :");
  scanf("%d",&size);
  printf("Enter the Elements of an Array :");
  for (int i = 0; i < size; i++)
  {
    scanf("%d",&array[i]);
  }
  
  printf("Enter the Searching Element ");
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, search_element);

  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}