#include <stdio.h>

int main()
{
    int luku;

    printf("Anna salanumero: ");
    scanf("%d", &luku);

    while (luku != 17)
    {
        printf("Vaara salanumero! Syota uudelleen: ");
        scanf("%d", &luku);
    }

    printf("Onneksi olkoon! Salanumero on oikein!\n");

    return 0;
}
