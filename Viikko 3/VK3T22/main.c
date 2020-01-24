#include <stdio.h>

int main()
{
    char x;

    printf("Anna merkki a, b tai c: ");
    x = getchar();

    switch (x)
    {
    case 'a':
        printf("Painoit aan.\n");
        break;
    case 'b':
        printf("Painoit been.\n");
        break;
    case 'c':
        printf("Painoit ceen.\n");
        break;
    default:
        printf("Vaara merkki.\n");
    }

    return 0;
}
