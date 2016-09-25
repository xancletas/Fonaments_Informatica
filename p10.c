#include <stdio.h>

int main ()
{
	float a,b,area;

	printf("\n\t\tx---------------------------x\
		\n\t\t|CALCULA L'AREA DEL TRIANGLE|\
		\n\t\tx---------------------------x\n\n");

	printf("Entra l'altura i la base del triangle.\n\n\taltura>");
	scanf("%f",&a);
	printf("\n\tbase>");
	scanf("%f",&b);
	
	area = (a+b)/2;

	printf("\nLa area del triangle es de %.2f\n ",area);

	return 0;
}

