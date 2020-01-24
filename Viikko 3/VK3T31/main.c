#include <stdio.h>

int main()
{
    int lkm;
    float val, sum = 0;

    printf("Anna lukujen maara: ");
    scanf("%d", &lkm);

    for(int i=0; i < lkm; ++i) {
        printf("Anna %d. luku: ", i+1);
        scanf("%f", &val);
        sum += val;
    }

    printf("Summa: %.2f\n"
           "Keskiarvo: %.2f\n", sum, sum / lkm);

    return 0;
}
