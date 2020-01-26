#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 100

int main()
{
    char string[ARRAY_SIZE];
    int integer;
    float decimal;

    printf("Syota kokonaisluku: ");
    scanf("%s", string);
    integer = atoi(string);

    printf("Syota desimaaliluku: ");
    scanf("%s", string);
    decimal = atof(string);

    printf("%.2f\n", decimal + integer);

    return 0;
}
