#include <stdio.h>

int main()
{
    int x;

    printf("Anna opiskelijan pistemaara: ");
    scanf("%d", &x);
    printf("Pistemaaralla %d saa arvosanan ", x);

    if (x < 8)
        printf("0 (hylatty).\n");
    else if (x < 12)
        printf("1.\n");
    else if (x < 15)
        printf("2.\n");
    else if (x < 19)
        printf("3.\n");
    else if (x < 22)
        printf("4.\n");
    else
        printf("5.\n\n");

    return 0;
}
