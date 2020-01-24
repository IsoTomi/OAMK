#include <stdio.h>

float squarePerimeter();

int main()
{
    printf("Nelion piiri on %.2f.\n", squarePerimeter());
    return 0;
}

float squarePerimeter()
{
    float x;

    printf("Anna nelion sivun pituus: ");
    scanf("%f", &x);

    return 4 * x;
}
