#include <stdio.h>

int ant;
float valorGeneral = 320.0;
float descuento;
float CalcValor(int a, float b);

int main(){
    printf("Ingrese sus anos de antiguedad: \n");
    scanf("%d", &ant);
    descuento = CalcValor(ant,valorGeneral);
    printf("El valor general es de: %f\n", valorGeneral);
    printf("Usted tiene %d de antiguedad\n", ant);
    printf("Su cuota, con descuento aplicado, es de: %f\n", descuento);
    return 0;
}

float CalcValor(int a, float b){
    float res, des;
    if (a > 5){
        des = b * 0.08;
        res = b - des;
    }else{
        res = b;
    }
    return res;
}