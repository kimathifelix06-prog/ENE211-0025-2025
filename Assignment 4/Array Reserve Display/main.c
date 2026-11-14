#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int arr[100];

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    if (n < 1 || n >100)
    {
        printf("Invalid number of elements! Enter between 1 and 100.\n");
        return 1;
    }

    printf("Input %d number of elements in the array:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The values stored into the array are: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The values stored into the array in reverse are: ");

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
