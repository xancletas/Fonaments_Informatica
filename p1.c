#include <stdio.h>

int main ()
{
	float a,b,c,m;

	printf("\n\t\t-------\
		\n\t\tMITJANA\
		\n\t\t-------\n\n");

	printf("Entra les 3 notes per calcular la mitjana.\n");
	scanf("%f %f %f",&a,&b,&c);
	
	m = (a+b+c)/3;

	printf("La mitjana de les notes {%.2f,%.2f,%.2f} es de %.2f\n", a,b,c,m);

	return 0;
}

