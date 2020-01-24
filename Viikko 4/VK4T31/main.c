#include <stdio.h>

int askIntFunc();
float askFloatFunc();

int main()
{


    int x = askIntFunc();
    float y = askFloatFunc();

    printf("Annoit kokonaisluvun %d ja "
           "desimaaliluvun %.2f.\n", x, y);

    return 0;
}

int askIntFunc()
{
    int x;
    printf("Anna kokonaisluku: ");
    scanf("%d", &x);
    return x;
}

float askFloatFunc()
{
    float x;
    printf("Anna desimaaliluku: ");
    scanf("%f", &x);
    return x;
}
