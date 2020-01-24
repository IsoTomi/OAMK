#include <stdio.h>

int main()
{
    int x, y;

    printf("Anna ensimmainen luku: ");
    scanf("%d", &x);
    printf("Anna toinen luku: ");
    scanf("%d", &y);

    if (x > y)
        printf("%d %d\n\n", x, y);
    else
        printf("%d %d\n\n", y, x);

    return 0;
}
