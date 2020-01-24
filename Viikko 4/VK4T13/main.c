#include <stdio.h>

int main()
{
    float values[4];
    float sum = 0;

    printf("Anna nelja desimaalilukua\n");

    for (int i=0; i < 4; ++i) {
        printf("Anna %d. luku: ", i+1);
        scanf("%f", &values[i]);
        sum += values[i];
    }

    printf("Lukujen summa on %.2f.\n", sum);
    printf("Lukujen keskiarvo on %.2f.\n", sum / 4);

    return 0;
}
