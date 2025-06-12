#include <stdio.h>

#define NMAX 5

typedef struct 
{
    int a[NMAX];
    int cant;
}Tdata;

Tdata notas;
int cantA,cantR;
float promA,promR;
void IgresaNotas(Tdata *a);
void Separar(Tdata a, int *b, int *c);
void Mostrar(int a, int b, float c, float d, Tdata e);
int main(){
    IgresaNotas(&notas);
    Separar(notas,&cantA,&cantR);
    Mostrar(cantA,cantR,promA,promR,notas);
    return 0;
}

void IgresaNotas(Tdata *a){
    a->cant = NMAX;
    int sum;
    float promGral;
    for (int i = 0; i < a->cant; i++)
    {
        printf("Ingrese la nota: ");
        scanf("%d", &a->a[i]);
    }
    
    sum = 0;
    for (int k = 0; k < a->cant; k++)
    {
        sum = sum + a->a[k];
        
    }
    //printf("%d\n", sum);
    promGral = sum / a->cant;

    printf("El promedio general del grupo es de: %.2f\n", promGral);
}

void Separar(Tdata a, int *b, int *c){
    int f = 0;
    int k = 0;
    int i;
    for (i = 0; i < a.cant; i++)
    {
        if (a.a[i] >= 5){
            f++;
        }else{
            k++;
        }
        
    }
    *b = f;
    *c = k;
    
}

void Mostrar(int a, int b, float c, float d, Tdata e){
    c = (a * 100)/e.cant;
    d = (b * 100)/e.cant;
    printf("La cantidad de Aprobados es: %d\n", a);
    printf("La cantidad de de Desaprobados es: %d\n", b);

    printf("El porcentaje de Aprobados es del: %.2f por ciento.\n", c);
    printf("El porcentaje de Desaprobados es del: %.2f por ciento.", d);
}