#include <stdio.h>

#define MAX 10

typedef struct 
{
    int a[MAX];
    int cant;
}Tdata;
Tdata arr1,arr2,arr3;

int ver(int a[], int b, int c);
void Arreglo(Tdata a,Tdata b, Tdata c);


int main(){
    Arreglo(arr1,arr2,arr3);
    return 0;
}


int ver(int a[], int b, int c){ 
    for (int i = 0; i < b; i++)
    {
        if (a[i] == c){
            return 1;
        }
    }
    return 0;
    
}

void Arreglo(Tdata a,Tdata b,Tdata c){
    printf("Ingrese la cantidad de numeros: "); // se ingresa la cantidad
    scanf("%d", &a.cant);
    for (int i = 0; i < a.cant; i++){ // se van ingresando 1 a 1 los numeros
        printf("Ingrese el numero: ");
        scanf("%d", &a.a[i]);
    }

    printf("El numero ingresado es: "); // se muestra los numeros ingresados
    for (int i = 0; i < a.cant; i++)
    {
        printf(" %d ", a.a[i]);
    }

    int f=-1; //inicia antes de cero para poder utlizar el valor 0
    for (int i = 0; i < a.cant ; i++) 
    {   
        if(!ver(b.a,a.cant,a.a[i])){ // se comprueba si los nuemeros estan en el array nuevo, de no ser asi se copian
            f++;
            b.a[f] = a.a[i];
        }
        
        
    }
    //printf("\n%d\n", f); 
    printf("\n");
    for (int i = 0; i <= f; i++) // se reasignan los nuevos numero a otra array delimitada por la nueva cantidad
    {
        c.a[i] = b.a[i];
    }

    printf("El numero corregido es: "); // finalmente se muestran 
    for (int i = 0; i <= f; i++)
    {
        printf(" %d ", c.a[i]);
    }
    f++;
    printf("\nLa cantidad es: %d", f);
}