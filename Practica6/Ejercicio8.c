#include <stdio.h>
#include <string.h>

typedef struct {
    char tela[30];
    float precio;
}Tcortina;

Tcortina cortina1;
Tcortina cortina2;
Tcortina cortina3;
float precioFinal;

void Oferta(Tcortina a, Tcortina b, Tcortina c, float *d);
void IngresarDatos(Tcortina *a);

int main(){
    /*printf("Ingrese la tela: \n");
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
    scanf("%f", &cortina3.precio);*/ //Propuesta del practico
    IngresarDatos(&cortina1);
    IngresarDatos(&cortina2);
    IngresarDatos(&cortina3);
    Oferta(cortina1, cortina2, cortina3, &precioFinal);
    printf("%f", precioFinal);
    return 0;
}

void Oferta(Tcortina a, Tcortina b, Tcortina c, float *d){
    if ((strcmp(a.tela,b.tela)==0) && (strcmp(a.tela,c.tela)==0)){
        c.precio = c.precio - (c.precio * 0.30);
    }
    *d = a.precio + b.precio + c.precio;
}

void IngresarDatos(Tcortina *a){
    printf("Ingrese la tela: \n");
    scanf("%s", a->tela);
    printf("Ingrese su precio: \n");
    scanf("%f", &a->precio);
}