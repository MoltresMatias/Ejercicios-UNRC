
#include <stdio.h>
#include <string.h>

float tecAcost, tecBcost, porcent;
char mensaje[];

int main(){
	printf("Ingrese el precio de TECNO-A: ");
	scanf("%f", &tecAcost);
	printf("Ingrese el precio de TECNO-B: ");
	scanf("%f", &tecBcost);

	porcent = (tecAcost+5.00)/100;
	tecAcost = tecAcost * porcent;
	
	if (tecAcost < tecBcost){
		strcpy(mensaje,"Se recomienda comprar en TECNO-A");
	}else {
		strcpy(mensaje,"Se recomienda comprar en TECNO-B");
	}	
	printf("%s",mensaje);
	return 0;
}
