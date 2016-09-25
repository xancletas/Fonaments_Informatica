#include <stdio.h>

int main ()
{
	float a,b;

	printf("\n\t\t---------------\
		\n\t\tCOST DEL VIATGE\
		\n\t\t---------------\n\n");

	printf("Entra el numero de Kilomentres a viatjar\n>");
	scanf("%f",&a);
	
	b = a*2;

	printf("Et costara %.2f euros fer %.2f Kilometres\n",b,a);

	return 0;
}

