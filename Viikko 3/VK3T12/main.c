#include <stdio.h>

int main()
{
    char name[50];
    int x;


    printf("Anna nimesi: ");
    scanf("%[^\n]s", name);
    printf("Montako kertaa toistetaan: ");
    scanf("%d", &x);

    for (int i=0; i < x; ++i)
        printf("%s\n",name);

    return 0;
}
