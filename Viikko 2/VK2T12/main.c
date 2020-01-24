#include <stdio.h>

int main()
{
    int x, y, jaannos;

    printf("Anna jokin luku: ");
    scanf("%d", &x);
    printf("Anna toinen luku: ");
    scanf("%d", &y);

    jaannos = x % y;

    if (jaannos == 0)
        printf("Ensimmainen luku on jaollinen toisella luvulla. ");
    else
        printf("Luku ei ole jaollinen toisella luvulla. ");

    printf("Jakojaannos on %d.\n\n", jaannos);

    return 0;
}
