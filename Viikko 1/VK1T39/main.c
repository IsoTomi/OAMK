#include <stdio.h>

int main()
{
    int luku = 0;

    printf("Syota jokin luku: ");
    scanf("%d", &luku);

    if (luku > 0)
        printf("Antamasi luku on positiivinen.\n");
    else if (luku < 0)
        printf("Antamasi luku on negatiivinen.\n");
    else
        printf("Antamasi luku on nolla.\n.");

    return 0;
}
