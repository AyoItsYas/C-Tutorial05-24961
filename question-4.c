#include <stdio.h>

int main(void)
{
    const int MAX = 10;

    int i = 0;
    int total = 0;
    int value = 0;

    printf("Enter %d numbers to accumilate and to calculate the average.\n", MAX);
    for (i = 0; i < MAX; i++)
    {
        printf("Enter a number to accumilate (%2d): ", i + 1);
        scanf("%d", &value);

        total += value;
    }

    printf("\n");
    printf("Total   : %d\n", total);
    printf("Average : %d\n", total / MAX);

    for (i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}