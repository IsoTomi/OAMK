#include <stdio.h>

void readArray(int *array, int size);
void multiplyArray(int *array, int size, int factor);
void printArray(int *array, int size);

int main()
{
    int size = 5;
    int array[size];

    printf("Syota viisi kokonaislukua.\n");
    readArray(array, size);
    multiplyArray(array, size, 5);
    printArray(array, size);

    return 0;
}

void readArray(int *array, int size)
{

    for (int i=0; i<size; ++i) {
        printf("%d. luku: ", i+1);
        scanf("%d", &array[i]);
    }
}

void multiplyArray(int *array, int size, int factor)
{

    for (int i=0; i<size; ++i) {
        array[i] *= factor;
    }
}

void printArray(int *array, int size)
{

    for (int i=0; i<size; ++i) {
        printf("%d\n", array[i]);
    }
}
