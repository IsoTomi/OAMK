#include <stdio.h>

int main()
{
    float x, y;

    printf("Anna ensimmainen liukuluku: ");
    scanf("%f", &x);
    printf("Anna toinen liukuluku: ");
    scanf("%f", &y);

    printf("Liukulukujen summa on %f.\n\n", x + y);
    return 0;
}
