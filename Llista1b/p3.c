#include <stdio.h>

int main ()
{
	//variables
	float a,b,c,min,max;
	
	//titol
	printf("\n\t\t-------------\
		\n\t\tMAXIM I MINIM\
		\n\t\t-------------\n");

	//entrada de valors
	printf("Introdueix tres nombres:\n1.>");
	scanf("%f",&a);
	printf("2.>");
	scanf("%f",&b);
	printf("3.>");
	scanf("%f",&c);

	//computacio
	max = a;
	min = b;
	
	if (max < min)
	{
		min = max;
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	else if (min > c)
	{
		min = c;
	}
	
	//resposta
	printf("Dels valors [%.2f,%.2f,%.2f]; %.2f es el maxim i %.2f es el minim.\n",a,b,c,max,min);


	return 0;
}
