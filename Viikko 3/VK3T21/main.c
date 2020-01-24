#include <stdio.h>

int main()
{
    int x;

    printf("Anna kokonaisluku (1 - 3): ");
    scanf("%d", &x);

    switch (x) {
        case 1:
            printf("Painoit ykkosen.\n");
            break;
        case 2:
            printf("Painoit kakkosen.\n");
            break;
        case 3:
            printf("Painoit kolmosen.\n");
            break;
        default:
            printf("Vaara kokonaisluku.\n");

    }

    return 0;
}
