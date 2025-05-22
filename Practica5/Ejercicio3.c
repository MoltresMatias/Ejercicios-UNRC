#include <stdio.h>
#include <string.h>

int num, res;
char mensaje[30];
int EsParImpar(int i);

int main(){
    printf("Ingrese un numero: \n");
    scanf("%d", &num);
    res = EsParImpar(num);


    if (res == 1){
        strcpy(mensaje, "Es Cero");
    }else if (res == 2){
        strcpy(mensaje, "Es Par");
    }else if (res == 3){
        strcpy(mensaje, "Es Impar");
    }
    printf("el resultado es %s", mensaje);
    return 0;
}

int EsParImpar(int i){
    int k;
    if (i == 0){
        k = 1;
    }else if(i % 2 == 0){
        k = 2;
    }else{
        k = 3;
    }
    return k;
}