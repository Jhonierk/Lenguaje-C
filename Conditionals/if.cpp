#include <stdio.h>
int main(){
	int number;
	
	printf("ingreda un entero: ");
	scanf("%d", &number);
	
	if (number < 0){
		printf("Usted intordujo: %d. \n", number);
	}
	
	printf("La declaracion es facil");
	return 0;
}
