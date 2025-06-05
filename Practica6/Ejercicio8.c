#include <stdio.h>

typedef struct {
    char tela;
    float precio;
}Tcortina;

Tcortina cortina1;
Tcortina cortina2;
Tcortina cortina3;
float precioFinal;

void Oferta(Tcortina a, Tcortina b, Tcortina c, float *d);

int main(){
    printf("Ingrese la tela: \n");
    scanf("%s", &cortina1.tela);
    printf("Ingrese su precio: \n");
    scanf("%f", &cortina1.precio);
    printf("Ingrese la tela: \n");
    scanf("%s", &cortina2.tela);
    printf("Ingrese su precio: \n");
    scanf("%f", &cortina2.precio);
    printf("Ingrese la tela: \n");
    scanf("%s", &cortina3.tela);
    printf("Ingrese su precio: \n");
    scanf("%f", &cortina3.precio);
    Oferta(cortina1, cortina2, cortina3, &precioFinal);
    printf("%f", precioFinal);
    return 0;
}

void Oferta(Tcortina a, Tcortina b, Tcortina c, float *d){
    if ((a.tela == b.tela) && (a.tela == c.tela)){
        c.precio = c.precio - 0.3;
    }
    *d = a.precio + b.precio + c.precio;
}