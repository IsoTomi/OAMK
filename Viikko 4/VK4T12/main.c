#include <stdio.h>

int main()
{
    int num[6];
    int evenNum = 0;

    printf("Anna kuusi kokonaislukua\n");

    for (int i=0; i < 6; ++i) {
        printf("Anna %d. luku: ", i+1);
        scanf("%d", &num[i]);

        if ((num[i] % 2) == 0)
            evenNum++;
    }

    printf("Parillisia lukuja on %d\n", evenNum);

    return 0;
}
