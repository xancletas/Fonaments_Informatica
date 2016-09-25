#include <stdio.h>

int main ()
{
	float c,f;
	
	printf("\n\t\t-------------------\
		\n\t\tMETERS==>KILOMETERS\
		\n\t\t-------------------\n\n");

	printf("Entra els metres:");
	scanf("%f",&c);
	
	f = c/1000;

	printf("\n%.2f metres son %.2f kilometres.\n",c,f);

	return 0;
}
