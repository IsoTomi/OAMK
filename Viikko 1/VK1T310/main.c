#include <stdio.h>

int main()
{
    int x;

    printf("Anna salanumero: ");
    scanf("%d", &x);

    while (x != 17)
    {
        printf("Vaara salanumero! Syota uudelleen: ");
        scanf("%d", &x);
    }

    printf("Onneksi olkoon! Salanumero on oikein!\n");

    return 0;
}
