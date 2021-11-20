#include<stdio.h>

int main()
{
	double mat[3][2];
	int i,j;
	
	printf("Introducir los datos de la matriz:\n");
	
	for (i=1;i<=3;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("Posicion[%d][%d] \n",i,j);
				
		}
	}
 
	return 0;
}
