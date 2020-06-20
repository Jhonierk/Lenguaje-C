#include <stdio.h>
int main(){
	int number;
	printf("Ingresa un entero: ");
	scanf("%d", &number);
	
	if (number%2 ==0)
	{
		printf("%d Es par ", number);
	}
	else
	{
		printf("%d es impar", number);
	}
	
	return 0;
}
