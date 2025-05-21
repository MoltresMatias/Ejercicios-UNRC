
#include <stdio.h>
#include <string.h>

char mensaje[30];
int nota1, nota2, nota3;
int promedio;

int NotaFinal(int not1,int not2,int not3);

int main(){

    do
    {
        printf("Ingrese la primer nota: \n");
        scanf("%d", &nota1);
    } while (nota1 <= 0);
    do
    {
        printf("Ingrese la segunda nota: \n");
        scanf("%d", &nota2);
    } while (nota2 <= 0);
    do
    {
        printf("Ingrese la tercer nota: \n");
        scanf("%d", &nota3);
    } while (nota3 <= 0);

    promedio = NotaFinal(nota1, nota2, nota3);

    if (promedio < 5){
        strcpy(mensaje, "Libre");
    }else if((promedio >=5) && (promedio < 7)){
        strcpy(mensaje, "Regular");
    }else{
        strcpy(mensaje, "Promocion");
    }
    printf("Tu nota es: %d, %s", promedio, mensaje);

    return 0;
}

int NotaFinal(int not1,int not2,int not3){
    int prom;
    if ((not1 < 4) || (not2 < 4) || (not3 < 4)){
        prom = 2;
    }else{
        prom = ((not1+not2+not3)/3);
    }
    return prom;
}