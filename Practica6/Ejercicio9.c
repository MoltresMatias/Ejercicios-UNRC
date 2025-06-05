#include <stdio.h>
#include <string.h>

int nota1, nota2, nota3;
char msge[50];

void CondicionAlumno(int a, int b, int c, char *d);

int main(){
    CondicionAlumno(nota1,nota2,nota3,msge);
    printf("%s", msge);
    return 0;
}

void CondicionAlumno(int a, int b, int c, char *d){
    printf("Ingrese las 3 notas: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float prom;
    int menor;
    menor = a;
    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }
    prom = (a + b + c )/3;

    if (menor < 4){
        strcpy(d, "Estas Libre");
    }else if((menor>=4 && menor<=6)&&(prom<7)){
        strcpy(d, "Estas Regular");
    }else if((menor>=6)&&(prom>=7)){
        strcpy(d, "Estas Promocionado");
    }else{
        strcpy(d, "Estas Libre");
    }
}