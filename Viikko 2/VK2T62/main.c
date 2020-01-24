#include <stdio.h>

int main()
{
    int x[5], sum = 0;

    printf("Syota viisi kokonaislukua ja ohjelma laskee parittomien lukujen summan.\n");

    for (int i = 0; i < 5; ++i) {
        printf("Anna %d. luku : ", i+1);
        scanf("%d", &x[i]);
        if ((x[i] % 2) != 0)
            sum += x[i];
    }

    printf("Parittomien lukujen summa on %d.\n", sum);

    return 0;
}
