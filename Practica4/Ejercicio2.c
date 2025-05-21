#include <stdio.h>

int numero = 1;

int main() {
    do
    {
        if (numero % 12 == 0){
            printf("El %d es divisible por 2, 4 y 6 \n", numero);
        }
        numero++;
    } while (!(numero >= 100));
    

    return 0;
}

