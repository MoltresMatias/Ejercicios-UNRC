#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct {
    float x;
    float y;
}Tpunto;

Tpunto punto;
Tpunto centro;

float radio;
char mensaje[20];
float distancia;
int bool;

void PuntoCor(Tpunto *a);
void CentroCor(Tpunto *b,float *c);
void Resultado(Tpunto p, Tpunto c, float r,int *m, float *d);


int main(){
    PuntoCor(&punto);
    CentroCor(&centro, &radio);
    Resultado(punto, centro, radio, &bool, &distancia);

    if (bool){
        strcpy(mensaje, "verdadero");
    }else{
        strcpy(mensaje, "falso");
    }

    printf("\nEl punto es %s y la distancia es de: %.3f", mensaje, distancia);

    return 0;
}

void PuntoCor(Tpunto *a){
    printf("--Cordenada Punto-- \nIngrese la cordenada X: \n");
    scanf("%f", &(*a).x);
    printf("Ingrese la cordenada Y: \n");
    scanf("%f", &(*a).y);
}

void CentroCor(Tpunto *b,float *c){
    printf("--Cordenada Centro-- \nIngrese la cordenada X: \n");
    scanf("%f", &(*b).x);
    printf("Ingrese la cordenada Y: \n");
    scanf("%f", &(*b).y);
    printf("Ingrese el radio: \n");
    scanf("%f", &*c);
}

void Resultado(Tpunto p, Tpunto c, float r,int *m, float *d){
    *d = sqrt(((p.x-c.x) * (p.x-c.x)) + ((p.y-c.y) * (p.y-c.y)));

    if (*d <= r){
        *m = 1;
    }else{
        *m = 0;
    }
}
