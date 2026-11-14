#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i, j, count;
   int arr[100];

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

    printf("The unique elements found in the array are: ");

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
   return 0;
}
