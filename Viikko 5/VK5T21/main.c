#include <stdio.h>

int main()
{
    int pisteet, arvosana;

    printf("Anna opiskelijan pistemaara: ");
    scanf("%d", &pisteet);

    printf("Pistemaaralla %d saa arvosanan ", pisteet);

    if (pisteet < 8)
        arvosana = 0;
    if (pisteet >= 8 && pisteet <= 11)
        arvosana = 1;
    if (pisteet >= 12 && pisteet <= 14)
        arvosana = 2;
    if (pisteet >= 15 && pisteet <= 18)
        arvosana = 3;
    if (pisteet >= 19 && pisteet <= 21)
        arvosana = 4;
    if (pisteet >= 22)
        arvosana = 5;


    printf("%d.\n", arvosana);

    return 0;
}
