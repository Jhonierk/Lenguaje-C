#include <stdio.h>
int main()
{
	int number1, number2;
	printf("Ingresa un numero:");
	scanf("%d", &number1);
	printf("Ingresa otro numero:");
	scanf("%d", &number2);
	
	if (number1 == number2)
	{
		printf("Son iguales: %d = %d", number1, number2);
	}
	
	else if(number1 > number2)
	{
		printf("El numero %d es mayor que %d", number1, number2);
	}
	
	else
	{
		printf("El numero %d es menor que %d", number1, number2);
	}
	
	return 0;
}
