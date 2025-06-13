#include <stdio.h>
#include <string.h>
#define MAX 1000

typedef struct 
{
    char nom[MAX][30];
    int cantNom;
}Tdata;
int op;
Tdata nombres;
int Vacia(int a);
int Llena(int a);
void Insertar(Tdata *a);
void Suprimir(Tdata *a);
void Mostrar(Tdata a);
int main(){
    nombres.cantNom = 0;
    int Salir = 0;
    while (!Salir)
    {
        printf("\nSelecione que quiere hacer: \n");
        printf("1 - Para ingresar un nombre.\n2 - Para suprimir un nombre.\n3 - Para ver los nombres.\n Cualquier tecla para salir.\n");
        scanf("%d", &op);

        if (op == 1){
            Insertar(&nombres);
        }else if(op == 2){
            Suprimir(&nombres);
        }else if(op == 3){
            Mostrar(nombres);
        }else{
            Salir = 1;
        }
    }
    
    return 0;
}

int Vacia(int a){
    if (a == 0){
        return 1;
    }
    return 0;
}

int Llena(int a){
    if (a == MAX){
        return 1;
    }
    return 0;
}

void Insertar(Tdata *a){

    if(Llena(a->cantNom)){
        printf("La lista esta llena, intenta borrando un nombre de la lista\n");
    }else{
        printf("Ingrese el nombre: ");
        scanf("%s", &a->nom[a->cantNom]);
        a->cantNom++;
    }
}

void Suprimir(Tdata *a){

    if(Vacia(a->cantNom)){
        printf("La lista esta vacia, no hay nada que borrar\n");
    }else{
        int k = 0;
        char f[30][MAX];
        for (int i = 1; i < a->cantNom; i++)
        {
            strcpy(f[k], a->nom[i]);
            k++;
        }

        for (int i = 0; i < k; i++)
        {
            strcpy(a->nom[i],f[i]);
        }

        a->cantNom = k;
    }
}

void Mostrar(Tdata a){
    if (Vacia(a.cantNom))
    {
        printf("La lista esta vacia, no hay nada que mostrar, intente ingresando un nombre\n");
    }else{
        printf("Los nombres de la lista son: ");
        printf("[");
        for (int i = 0; i < a.cantNom; i++)
        {
            printf(" %s ", a.nom[i]);
        }
        printf("]");

        printf(" y la lista contine %d nombres.", a.cantNom);
        }
    
    
}