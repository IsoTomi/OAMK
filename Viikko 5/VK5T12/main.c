#include <stdio.h>

#define ARRAY_SIZE 8

float floatArray[ARRAY_SIZE];

void inputNumbers();
void outputInvNumbers();

int main()
{
    printf("Syota %d desimaalilukua\n", ARRAY_SIZE);
    inputNumbers();
    outputInvNumbers();
    return 0;
}

void inputNumbers()
{
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("Anna %d. luku: ", i+1);
        scanf("%f", &floatArray[i]);
    }
}

void outputInvNumbers()
{
    printf("Syottamasi luvut kaanteisjarjestyksessa:\n");
    for (int i=ARRAY_SIZE - 1; i >= 0; --i) {
        printf("%.2f\n", floatArray[i]);
    }
}
