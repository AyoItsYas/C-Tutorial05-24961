#include <stdio.h>

int main(void)
{
    int value = 0;
    int total = 0;

    int i = 0;
    while (i < 10)
    {
        total = total + value;

        printf("Enter a number to accumilate (%2d): ", ++i);
        scanf("%d", &value);
    }

    printf("Total (%d): %d", i, total);

    ////////////////////////////////////////////////////////////////

    i = 0;
    value = 0;
    total = 0;

    printf("\n\nEnter -99 to stop the program.\n");

    while (value != -99)
    {
        total = total + value;

        printf("Enter a number to accumilate (%d): ", ++i);
        scanf("%d", &value);
    }

    printf("Total (%d): %d", --i, total);

    return 0;
}
