#include <stdio.h>

void showOptions();
void squarePerimeter();
void circlePerimeter();

int main()
{
    int option = 0;

    do {
        showOptions();
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            squarePerimeter();
            break;

        case 2:
            circlePerimeter();
            break;

        default:
            printf("\nHuono syote. Kokeile uudelleen.\n\n");
        }

    } while(option != 9);

    return 0;
}

void showOptions()
{
    printf("Valitse yksi vaihtoehdoista:\n");
    printf("1. Nelion keha\n"
           "2. Ympyran keha\n"
           "9. Lopeta\n\n"
           "- ");
}

void squarePerimeter()
{
    float x;
    printf("Anna nelion sivun pituus: ");
    scanf("%f", &x);
    printf("\nNelion kehan pituus on %.2f.\n\n", 4 * x);
}

void circlePerimeter()
{
    float x;
    printf("Anna ympyran sade: ");
    scanf("%f", &x);
    printf("\nYmpyran Kehan pituus on %.2f.\n\n", 2 * 3.14 * x);
}
