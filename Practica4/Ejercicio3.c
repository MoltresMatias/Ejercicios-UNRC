

#include <stdio.h>
int numero;
int contador = 1;
int main(){
    do
    {   
        printf("Ingrese un numero: \n");
        scanf("%d", &numero);

        if ((numero >= 1)&&(numero <= 10)){
            printf("el valor ingresado es correcto");
            contador = 6;
        }else{
            printf("Ingrese otro numero \n");
            contador++;
        }
    } while (contador < 5);



    if (contador == 5){
        printf("el valor ingresado es incorrecto");
    }
    
}