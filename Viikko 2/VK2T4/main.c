#include <stdio.h>

int main()
{
    char str[50];

    printf("Kirjoita jotain (vahintaan nelja kirjainta): ");
    scanf("%s", str);

    for (int i=0; i<3; ++i)
        printf("%c\n", str[i]);

    return 0;
}
