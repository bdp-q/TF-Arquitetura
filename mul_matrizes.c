#include <stdio.h>

int main()
{
    int matriz[2][2] = {
        {1, 2},
        {3, 4}};

    int resultado[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            resultado[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                resultado[i][j] = resultado[i][j] + matriz[k][j] * matriz[i][k];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 1;
}