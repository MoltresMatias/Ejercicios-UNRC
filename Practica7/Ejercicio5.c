#include <stdio.h>
#define max 200 
typedef struct 
{
    int a[max];
    int cant;
}Tdata;


Tdata misNotas;
float promedio;

void cargarNotas(Tdata *notas);
void promedioNotas(Tdata a, float *b);

int main(){
    cargarNotas(&misNotas);
    promedioNotas(misNotas, &promedio);
    printf("El promedio final es: %.2f", promedio);
    return 0;
}

void cargarNotas(Tdata *notas){
    int i;
    printf("Ingrese la cantidad de notas a cargar: \n");
    scanf("%d", &notas->cant);
    
    for (i = 1; i <= notas->cant; i++)
    {
        printf("Ingrese la nota: \n");
        scanf("%d", &notas->a[i]);

        while ((notas->a[i] <= 0)||(notas->a[i] > 10))// agrego esto para poder validar que la nota ingresada sea correcta, se que no se pide en el ejercicio;
        {
            printf("-ingrese una nota valida-\n");
            printf("Ingrese la nota: \n");
            scanf("%d", &notas->a[i]);
        }
    }
}

void promedioNotas(Tdata a, float *b){
    int i;
    float sum;
    sum = 0;
    i = 1;
    while (i <= a.cant)
    {
        sum = sum + a.a[i];
        i++;
    }
    *b = sum/a.cant;
}