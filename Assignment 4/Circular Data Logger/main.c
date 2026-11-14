#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int nextIndex = 0;
int count = 0;

void insertSample(int value);
void printSamples();

int main()
{
  int choice, value;

  while(1)
  {
    printf("\n===== CIRCULAR DATA LOGGER =====\n");
    printf("1. Insert new reading\n");
    printf("2. Display all readings\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter sensor reading: ");
            scanf("%d", &value);
            insertSample(value);
            break;

        case 2:
            printSamples();
            break;

        case 3:
            printf("Exiting Data Logger...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
    }
  }
  return 0;
}

void insertSample(int value)
{
    buffer[nextIndex] = value;

    nextIndex = (nextIndex + 1) % BUFFER_SIZE;

    if(count < BUFFER_SIZE)
    {
        count++;
    }
}

void printSamples()
{
    int i;
    int startIndex;

    startIndex = (nextIndex - count + BUFFER_SIZE) % BUFFER_SIZE;

    printf("\nStored readings (oldest to newest):\n");

    for(i = 0; i < count; i++)
    {
        printf("%d ", buffer[(startIndex + i) % BUFFER_SIZE]);
    }

    printf("\n");
}
