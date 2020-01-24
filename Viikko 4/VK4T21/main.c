#include <stdio.h>

int main()
{
    int values[2][3] = {{100, 200, 300},
                        {1000, 2000, 3000}};

    for (int i=0; i < 2; ++i) {
        for (int j=0; j<3; ++j) {
            printf ("%d ", values[i][j]);
        }
        printf("\n");
    }
    return 0;
}
