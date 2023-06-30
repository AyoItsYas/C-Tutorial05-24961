#include <stdio.h>

int main(void)
{
    int i = 0;
    int value = 0;
    int total = 0;

    printf("Enter -99 to stop the program.\n");

    do
    {
        total = total + value;

        printf("Enter a number to accumilate (%d): ", ++i);
        scanf("%d", &value);
    } while (value != -99);

    printf("Total (%d): %d", --i, total);

    return 0;
}