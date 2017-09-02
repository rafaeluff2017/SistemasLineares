#include<stdio.h>
main()
{
	int i,j,k,n;				//Declaração de variavie
	float A[20][20],c,x[10];
	printf("\nEntre com o tamanho da matriz: ");
	scanf("%d",&n);
	printf("\nEntre com os elementos da matriz aumentada:\n");
	for(i=1; i<=n; i++)
   	{
		for(j=1; j<=(n+1); j++)
		{
            		printf(" A[%d][%d]:", i,j);
            		scanf("%f",&A[i][j]);
      		}
   	}

	//diagonalizando
	for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(i!=j) // Pegando elementos Diferentes
            {
                c=A[i][j]/A[j][j];// operador para diagonalizar
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k]; // fazendo para todas as linhase colunas
                }
            }
        }
    }
