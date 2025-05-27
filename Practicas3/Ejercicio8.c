#include <stdio.h>
#include <string.h>
#include <math.h>

int numero;
char resultado[40];

int main(){
    printf("Ingrese un numero entero: \n");
    scanf("%d", &numero);
    
    if ((numero % 2 == 0) && !(numero %3 == 0)){
        strcpy(resultado, "mult de 2");
    }else if ((numero % 3 == 0) && !(numero % 2 == 0)){
        strcpy(resultado, "mult de 3");
    }else if ((numero % 2 == 0) && (numero %3 == 0)){
        strcpy(resultado, "mult de 2 y 3");
    }
    printf(resultado);
    return 0;
}