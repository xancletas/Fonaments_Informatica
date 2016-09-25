#include <stdio.h>

int main ()
{
	float a,b;

	printf("\n\t\t-----------------\
		\n\t\tINCREMENT DEL SOU\
		\n\t\t-----------------\n\n");

	printf("Entri el seu sou actual:");
	scanf("%f",&a);
	
	a = a*0.08+a ;

	printf("El seu nou sou sera de %.2f euros (un increment del 8%)\n",a);

	return 0;
}

