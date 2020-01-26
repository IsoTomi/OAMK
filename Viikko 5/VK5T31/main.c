#include <stdio.h>

#define ARRAY_SIZE 100

char charArray[ARRAY_SIZE];

int numOfLetters(char letter);

int main()
{
    printf("Syota merkkijono: ");
    scanf("%100s", charArray);

    printf("A-merkkeja loytyy merkkijonosta %d kappaletta.\n", numOfLetters('A'));
    printf("a-merkkeja loytyy merkkijonosta %d kappaletta.\n", numOfLetters('a'));

    return 0;
}

int numOfLetters(char letter)
{
    int num = 0;

    for (int i=0; i<ARRAY_SIZE; ++i) {
        if (charArray[i] == letter) {
            num++;
        }
    }

    return num;
}
