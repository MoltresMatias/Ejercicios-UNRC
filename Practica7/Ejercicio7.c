#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30

const int min=0, max=999;

typedef struct 
{
    int num[TAM];
    int cant;
}Tdata;
Tdata numRam;
int Repetido(int a[], int b, int c);
void NumeroAle(int a, int b, Tdata *c);
void MostrarResultados(Tdata a);

int main(){
    NumeroAle(max,min,&numRam);
    MostrarResultados(numRam);
    return 0;
}

int Repetido(int a[], int b, int c){// se verifica si el numero ramdom esta dentro del array, si se repite
    for (int i=0; i < b; i++){
        if (a[i] == c){
            return 1;
        }
    }
    return 0;
}

void NumeroAle(int a, int b, Tdata *c){
    int random;
    srand (time(NULL));
    printf("Ingrese la cantidad de numeros a generar: ");
    scanf("%d", &c->cant);
    while (c->cant > TAM){
        printf("Ingrese la cantidad de numeros a generar: ");
        scanf("%d", &c->cant);
    }
    random = 0;

    for(int i=0; i<c->cant; i++){
        
        do
        {
            random =  rand() % (a-b+1)+b;
        } while (Repetido(c->num, c->cant, random));// si es verdad se generara otro num
        c->num[i] = random;
    }
}

void MostrarResultados(Tdata a){
    printf("Los numeros generados son: ");
    for (int i = 0; i < a.cant-1; i++){
        printf("%d,", a.num[i]);
    }
}