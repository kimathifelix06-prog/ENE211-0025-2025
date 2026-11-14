#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i;
   int arr[100];
   int max, min;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

   if(n < 1 || n > 100)
   {
     printf("Invalid number of elements! Enter between 1 and 100.\n");
     return 1;
   }

   printf("Input %d elements in the array:\n", n);

   for(i = 0; i < n; i++)
  {
    printf("element - %d: ", i);
    scanf("%d", &arr[i]);
  }

    max = arr[0];
    min = arr[0];

   for(i = 1; i < n; i++)
  {
    if(arr[i] > max)
    {
        max = arr[i];
    }

    if(arr[i] < min)
    {
        min = arr[i];
    }
  }

  printf("Maximum element is: %d\n", max);
  printf("Minimum element is: %d\n", min);

  return 0;
}
