#include <stdio.h>
#include <string.h>

float marca1, marca2, marca3;

int main(){
    printf("Ingrese el tiempo de A-1: \n");
    scanf("%f", &marca1);
    printf("Ingrese el tiempo de A-2: \n");
    scanf("%f", &marca2);
    printf("Ingrese el tiempo de A-3: \n");
    scanf("%f", &marca3);

    if (marca1 < marca2 && marca1 < marca3){
        printf("%f,  %f,  %f",marca1, marca2, marca3);
    }else if (marca2 < marca1 && marca2 < marca3){
        printf("%f,  %f,  %f",marca2, marca1, marca3);
    }else if(marca3 < marca2 && marca3 < marca2){
        printf("%f,  %f,  %f",marca3, marca2, marca1);
    }
}