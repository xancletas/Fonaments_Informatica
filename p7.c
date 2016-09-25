#include <stdio.h>

int main ()
{
	float c,f;
	
	printf("\n\t\t--------------------\
		\n\t\tCELSIUS==>FAHRENHEIT\
		\n\t\t--------------------\n\n");

	printf("Entra la temperatura en graus Celsius:");
	scanf("%f",&c);
	
	f = c*9/5+32;		//formula de Celsius a Fahrenheit http:manualsweb.com/temp.htm

	printf("\n%.2f graus Celsius son %.2f graus Fahrenheit.\n",c,f);

	return 0;
}
