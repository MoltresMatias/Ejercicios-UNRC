#include <stdio.h> // OrdenInverso Ejemplo VII 
#include <string.h>
#define Max 150
typedef struct {
int d[Max]; 
int cant;}TData;
TData datos;
int i;
int main(){
    i=0;
    printf("Ingrese cantidad de elementos: ");
    scanf("%d",&datos.cant);
    printf("Ingrese %d numeros\n",datos.cant);
    while(i<datos.cant){
        scanf("%d",&datos.d[i]);
        i++;
    }
    i=0;
    while(i<datos.cant){
        printf("elemento en la posicion %d es %d\n", i,datos.d[i]);
        i++;
    }
    return 0;
}