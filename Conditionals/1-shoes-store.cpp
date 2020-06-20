#include <stdio.h>
int main()
{
	int cantidad, monto = 0, descuento;
	
	
	printf("Ingrese  cantidad de zapatos: ");
	scanf("%d", &cantidad);
	monto = cantidad * 80;	
	
	if (cantidad >0 && cantidad <=10)
	{
		printf("tiene que pagar un total de: %d \n", monto);
	}
	else if(cantidad == 0 )
	{
		printf("Cantidad nula o vacia");
	}
	else if(cantidad < 0){
		printf("Cantidad negativa invalida!");
	}
	
	if (cantidad >= 10)
	{
		if (cantidad < 20){
			
		descuento = monto - (monto * 0.10);
		printf("Tiene que pagas un total de %d \n", descuento);
		
		}
			
	}
	
	if(cantidad >= 20 && cantidad < 30){
		
		descuento = monto - (monto * 0.20);
		printf("Tiene que pagas un total de %d \n", descuento);
		
	}
	
	if(cantidad >= 30 && cantidad < 40){
		
		descuento = monto - (monto * 0.30);
		printf("Tiene que pagas un total de %d \n", descuento);
		
	}
	
	if(cantidad >= 40 && cantidad  < 50){
		
		descuento = monto - (monto * 0.40);
		printf("Tiene que pagas un total de %d \n", descuento);
		
	}
	
	if(cantidad >= 50){
		
		descuento = monto - (monto * 0.50);
		printf("Tiene que pagas un total de %d \n", descuento);
		
	}
	
	return 0;
}
