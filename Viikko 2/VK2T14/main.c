#include <stdio.h>

int main()
{
    char userName[50];

    printf("Anna nimesi: ");
    scanf("%[^\n]s", userName);
    printf("Terve %s!\n\n", userName);

    return 0;
}
