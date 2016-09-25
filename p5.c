#include <stdio.h>

int main ()
{

	int a,b,c,_money;

	printf("\n\t\t------------------\
		\n\t\tSUMADOR DE BILLETS\
		\n\t\t------------------\n\n");
	printf("Entra el numero de billets de 5 euros:");
	scanf("%d",&a);
	printf("Entra el numero de billets de 10 euros:");
	scanf("%d",&b);
	printf("Entra el numero de billets de 20 euros:");
	scanf("%d",&c);

	_money = 5*a+10*b+20*c;
	
	printf("En total tens %d euros\n", _money);	

	return 0;
}
