#include <stdio.h>
#define N 512
int main()
{
	int matriz[N][N];
	int resultado[N][N] = {0};

	for (int i = 0; i < N; i++)
    	for (int j = 0; j < N; j++)
        	matriz[i][j] = (i + j) % 100;
   
	 for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < N; k++)
                resultado[i][j] = resultado[i][j] + matriz[i][k] * matriz[k][j];
	
	printf("%d\n", resultado[N-1][N-1]);
    return 1;
}
