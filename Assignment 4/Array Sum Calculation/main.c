#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0;
    int arr[100];

    printf(" Input the number of elements to be stored in the array: ");
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

     for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of all elements stored in the array is: %d\n", sum);

    return 0;
}
