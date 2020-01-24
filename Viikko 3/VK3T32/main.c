#include <stdio.h>

int main()
{
    int x;

    printf("Anna kuukauden järjestysluku (1 - 12): ");
    scanf("%d", &x);

    printf("%d. kuukausi on ", x);

    switch (x) {



    case 1:
        printf("tammikuu.\n");
        break;

    case 2:
        printf("helmikuu.\n");
        break;
    case 3:
        printf("maaliskuu.\n");
        break;
    case 4:
        printf("huhtikuu.\n");
        break;
    case 5:
        printf("toukokuu.\n");
        break;
    case 6:
        printf("kesäkuu.\n");
        break;
    case 7:
        printf("heinäkuu.\n");
        break;
    case 8:
        printf("elokuu.\n");
        break;
    case 9:
        printf("syyskuu.\n");
        break;
    case 10:
        printf("lokakuu.\n");
        break;
    case 11:
        printf("marraskuu.\n");
        break;
    case 12:
        printf("joulukuu.\n");
        break;
    default:
        printf("tuntematon kuukausi.\n");
   }

    return 0;
}
