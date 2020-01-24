#include <stdio.h>

int main()
{
    int x;

    while (1)
    {
        printf("Anna salanumero: ");
        scanf("%d", &x);

        if (x == 17)
            break;

        printf("Vaara salanumero.\n");
    }

    printf("Salanumero oikein.\n\n");

    return 0;
}
