#include <stdio.h>

int main()
{
	//vars
	int n,_n;
	int sum = 0;
	int pro = 1;
	float mitj;

	//introduuccio
	printf	("Calcula la suma, la multiplicacio i la mitjana del 1 fins a n.\n\n");
	printf	("\t\tn.>");
	scanf	("%d",&n);
	_n = n;

	//calculs		
	do
	{
		sum += n;
		pro *= n;
		n--;
	
	}while(n);
	/*
	for(n;n>0;n--)
	{
		sum += n;
		pro *= n;
	}
	*/
	/*
	while(n)
	{
		sum += n;
		pro *= n;
		n--;
	}
	*/
	
	mitj = (float)sum/(float)_n;
	
	//resposta
	printf("\nLa suma de 1 fins a %d es de %d.\n",_n,sum);
	printf("El producte dels nombres entre 1 i %d es de %d.\n",_n,pro);
	printf("La mitjana da la suma es de %.2f.\n",mitj);
	
	return 0;
}
