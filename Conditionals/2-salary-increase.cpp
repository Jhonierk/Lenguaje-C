#include <stdio.h>
#include <stdlib.h>
/*
Que calcule el sueldo que le corresponde al trabajador de una empresa que cobra 40.000 euros anuales, el programa debe realizar los cálculos en función de los siguientes criterios:

a.       Si lleva más de 10 años en la empresa se le aplica un aumento del 10%.
b.      Si lleva menos de 10 años pero más que 5 se le aplica un aumento del 7%.
c.       Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 5%.
d.      Si lleva menos de 3 años se le aplica un aumento del 3%.
*/
int main()
{
	int anio, sueldo = 40000, aumento = 0;
	printf("Cuantos años lleva en la empresa?: ");
	scanf("%d", &anio);
	
	if(anio >= 10)
	{
		aumento =  sueldo * 0.10;
	}	
	
	else if(anio >= 5 && anio < 10)
	{
		aumento = sueldo * 0.07;
	}
	
	else if(anio <5 && anio >= 3)
	{
		aumento = sueldo * 0.05;
	}
	
	else
	{
		aumento = sueldo * 0.03;
	}
	
	 printf("El sueldo que le corresponde al trabajador es de %d euros \n",sueldo + aumento);
	 
	return 0;
}
