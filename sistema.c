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

