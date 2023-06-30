#include <stdio.h>

int main(void)
{
    int x, y, z, choice;

    printf("Enter two numbers ___ ___ ");
    scanf("%d %d", &x, &y);

    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("Please enter your choice ___ ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        z = x + y;
        break;
    case 2:
        z = x - y;
        break;
    case 3:
        z = x * y;
        break;
    case 4:
        z = x / y;
        break;
    default:
        printf("Invalid input!");
        break;
    }

    printf("\n");
    printf("Result : %d", z);

    return 0;
}