#include <stdio.h>

typedef struct {
    float x;
    float y;
}Tpunto;
Tpunto punto;
Tpunto centro;
float radio;
void PuntoCor(Tpunto *a);
void CentroCor(Tpunto *b,float *c);


int main(){
    PuntoCor(&punto);
    CentroCor(&centro, &radio);
    return 0;
}

void PuntoCor(Tpunto *a){
    printf("Ingrese la cordenada X: \n");
    scanf("%f", &a->x);
    printf("Ingrese la cordenada Y: \n");
    scanf("%f", &a->y);
}

void CentroCor(Tpunto *b,float *c){
    printf("Ingrese la cordenada X: \n");
    scanf("%f", &b->x);
    printf("Ingrese la cordenada Y: \n");
    scanf("%f", &b->y);
    printf("Ingrese el radio: \n");
    scanf("%f", &*c);
}