#include <stdio.h>

void readArray(float array[], int size);
void writeArray(float array[], int size);

int main()
{
    int size;

    printf("Anna taulukon koko: ");
    scanf("%d", &size);

    float array[size];
    readArray(array, size);
    writeArray(array, size);
    return 0;
}

void readArray(float array[], int size)
{
    for (int i=0; i<size; i++) {
        printf("Anna %d. luku: ", i+1);
        scanf("%f", &array[i]);
    }
}

void writeArray(float array[], int size)
{
    for (int i=size-1; i>=0; i--) {
        printf("%.2f\n", array[i]);
    }
}
