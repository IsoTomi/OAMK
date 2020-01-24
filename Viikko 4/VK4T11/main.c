#include <stdio.h>

int main()
{
    float numbers[5];

    printf("Anna viisi desimaalilukua:\n");

    for (int i=0; i<5; ++i) {
        printf("Anna %d. luku: ", i+1);
        scanf("%f", &numbers[i]);
    }

    for (int i=0; i<5; ++i) {
        printf("%d. luku on %.2f\n", i+1, numbers[i]);
    }

    return 0;
}
