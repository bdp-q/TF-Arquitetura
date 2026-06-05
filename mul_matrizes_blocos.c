#include <stdio.h>

int main()
{
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int resultado[4][4] = {0};

    for (int i = 0; i < 4; i += 2)
        for (int j = 0; j < 4; j += 2)
            for (int k = 0; k < 4; k += 2)
                for (int ii = i; ii < i + 2; ii++)
                    for (int jj = j; jj < j + 2; jj++)
                        for (int kk = k; kk < k + 2; kk++)
                            resultado[ii][jj] += matriz[ii][kk] * matriz[kk][jj];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}