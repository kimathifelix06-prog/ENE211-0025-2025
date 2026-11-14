#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, pos, value;
    int arr[100];
    printf("Input the number of elements in the array: ");
    scanf("%d", &n);

    if(n < 1 || n >= 100)
  {
    printf("Invalid number of elements! Enter between 1 and 99.\n");
    return 1;
  }

    printf("Input %d elements in the array:\n", n);

    for(i = 0; i < n; i++)
  {
    printf("element - %d: ", i);
    scanf("%d", &arr[i]);
  }

    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    printf("Input the position where the value should be inserted (0 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n)
  {
    printf("Invalid position!\n");
    return 1;
  }

    for(i = n; i > pos; i--)
  {
    arr[i] = arr[i - 1];
  }

    arr[pos] = value;

    n++;

    printf("The updated array is:\n");

    for(i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

     printf("\n");

     return 0;
}
