#include <stdio.h>

int mes;


int main(){
    scanf("%d", &mes);

    switch (mes)
    {
    case 1: case 2: case 3:
        printf("31 dias");
        break;
    case 4: case 5: case 6:
        printf("28 dias");
        break;
    default: 
        printf("mes incorrecto");
    }
}