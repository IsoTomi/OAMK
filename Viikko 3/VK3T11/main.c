#include <stdio.h>

int main()
{
    int x;

    do {
        printf("Anna salaluku: ");
        scanf("%d", &x);
    } while (x != 17);

    printf("Salaluku oikein.\n");
}
