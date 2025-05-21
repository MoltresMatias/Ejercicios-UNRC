/*Rivarola Roberto Matias*/

#include <stdio.h>
#include <math.h>

int num;
int raiz; 
int i = 1;
int contador = 1;

int main(){
    printf("ingrese un numero: \n");
    scanf("%d", &num);

    if (num<=1){ //descarto los numeros negativos y el 1
        printf("El %d no es un numero primo", num);
    }else{
        
        raiz = sqrt(num);
        

        while (i <= raiz)
        {
            if ((num % i != 0)){
                contador++;
            }
            i++;
        }

        if (contador == raiz)
        {
            printf("El %d es un numero primo", num);
        }else
        {
            printf("El %d no es un numero primo", num);
        }
            
    }
    return 0;
}