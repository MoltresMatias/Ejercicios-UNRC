#include <stdio.h>

#define MAX 10

typedef struct 
{
    int a[MAX];
    int cant;
}Tdata;

Tdata Num;

void Agregar(Tdata *a);
void Mostrar(Tdata a);
int main(){
    Num.cant = 5;
    Num.a[0]=2;
    Num.a[1]=4;
    Num.a[2]=5;
    Num.a[3]=7;
    Num.a[4]=8;
    
    Agregar(&Num);
    Mostrar(Num);
}


void Agregar(Tdata *a){
    
    printf("Agrega el numero: ");
    scanf("%d", &a->a[a->cant]);

    for (int i=0; i < a->cant + 1; i++){
        for (int k=0; k < a->cant ; k++){
            if (a->a[k] > a->a[k+1]){
                int temp;
                temp = a->a[k];
                a->a[k] = a->a[k+1];
                a->a[k+1] = temp;
                temp = 0;
            }
        }
    }
}

void Mostrar(Tdata a){
    printf("Los numeros nuevos son:[");
    for (int i = 0; i <= Num.cant; i++)
    {
        printf(" %d ", Num.a[i]);
    }
    printf("]");
    return 0;
}