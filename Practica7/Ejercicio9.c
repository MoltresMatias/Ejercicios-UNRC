#include <stdio.h>
#include <string.h>
#define MAX 30
typedef struct 
{
    int a[30];
    int cant;
}Tdata;
Tdata pab;
int palabra;
int Comprobar(Tdata a);

int main(){
    palabra = Comprobar(pab);

    if (palabra){
        printf("\nEs capicua");
    }else{
        printf("\nNo es capicua");
    }
    return 0;
}

int Comprobar(Tdata a){
    int k,f;
    printf("Ingresa la cantidad de letras de tu palabra: \n");
    scanf("%d", &a.cant);
    printf("Ingrese la palabra por letra\n");
    
    for (int i = 0; i < a.cant; i++)
    {
        printf("Letra: ");
        scanf(" %c", &a.a[i]);
    }

    printf("La palabra es: ");
    
    for (int i = 0; i < a.cant; i++)
    {
        printf("%c", a.a[i]);
    }
    

    k = a.cant - 1;
    f=0;
    
    for (int i = 0; i < a.cant; i++)
    {
        if (a.a[i] == a.a[k]){
            f++;
        }
        k--;
    }
    
    if (f == a.cant){
        return 1;
    }else{
        return 0;
    }
}