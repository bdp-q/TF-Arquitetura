#include <stdio.h>
#define N 512

int main()
{
int matriz[N][N];
int resultado[N][N] = {0};

	for (int i = 0; i < N; i++)
    	for (int j = 0; j < N; j++)
        	matriz[i][j] = (i + j) % 100;

    for (int i = 0; i < N; i += 2)
        for (int j = 0; j < N; j += 2)
            for (int k = 0; k < N; k += 2)
                for (int ii = i; ii < i + 2; ii++)
                    for (int jj = j; jj < j + 2; jj++)
                        for (int kk = k; kk < k + 2; kk++)
                            resultado[ii][jj] += matriz[ii][kk] * matriz[kk][jj];

  
}
