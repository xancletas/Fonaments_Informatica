#include <stdio.h>

int main ()
{
	float a,b,s,r,p,d;

	printf("\n\t\t---------------------------\
		\n\t\tSUMA RESTA PRODUCTE DIVISIO\
		\n\t\t---------------------------\n\n");

	printf("Entra els dos numeros amb els que vulgui operar.\n1>");
	scanf("%f",&a);
	printf("2>");
	scanf("%f",&b);
	
	s = a+b;
	r = a-b;
	p = a*b;
	d = a/b;

	printf("\nLa SUMA de %.2f + %.2f es igual a %.2f",a,b,s);
	printf("\nLa RESTA de %.2f - %.2f es igual a %.2f",a,b,r);
	printf("\nLa PRODUCTE de %.2f * %.2f es igual a %.2f",a,b,p);
	printf("\nLa DIVISIO de %.2f / %.2f es igual a %.2f\n",a,b,d);

	return 0;
}

