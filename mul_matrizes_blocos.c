#include <stdio.h>
#define N 512
#define BLOCO 64
int main()
{
int matriz[N][N];
int resultado[N][N] = {0};

	for (int i = 0; i < N; i++)
    	for (int j = 0; j < N; j++)
        	matriz[i][j] = (i + j) % 100;

    for (int i = 0; i < N; i += BLOCO)
        for (int j = 0; j < N; j += BLOCO)
            for (int k = 0; k < N; k += BLOCO)
                for (int ii = i; ii < i + BLOCO; ii++)
                    for (int jj = j; jj < j + BLOCO; jj++)
                        for (int kk = k; kk < k + BLOCO; kk++)
                            resultado[ii][jj] += matriz[ii][kk] * matriz[kk][jj];
	    printf("%d\n", resultado[N-1][N-1]);
  
}
