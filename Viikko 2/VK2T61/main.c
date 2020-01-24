#include <stdio.h>

int main()
{
    int x, sum = 0;

    printf("Syota lukuja toisensa peraan, niin ohjelma laskee ne yhteen. (0 lopettaa ohjelman)\n");
    scanf("%d", &x);

    while (x != 0)
    {
        sum += x;
        scanf("%d", &x);
    }

    printf("Kokonaissumma on %d.\n", sum);

    return 0;
}
