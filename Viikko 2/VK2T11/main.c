#include <stdio.h>

int main()
{
    int x;

    printf("Syota jokin luku: ");
    scanf("%d", &x);

    if (x > 0)
        printf("Antamasi luku on positiivinen.\n");
    else if (x < 0)
        printf("Antamasi luku on negatiivinen.\n");
    else
        printf("Antamasi luku on nolla.\n.");

    return 0;
}
