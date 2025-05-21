/*
Analisis:
    Datos: nota1, nota2, nota3,prom 
    Resultado: Mnsaje
    Relaciones:
        NotaFinal <-- (2) cuado nota1,nota2, nota3 < 4 o bien
        NotaFinal <-- (prom) cuando nota1,nota2, nota3 >= 4

        mensaje <-- libre si (NotaFinal < 5) o bien
        mensaje <-- libre si ((NotaFinal >= 5) y NotaFinal < 7) o bien
        mensaje <-- libre si (NotaFinal >= 7) 

Diseño:
    Lexico:
        mensaje <-- cadena
        promedio <-- Z+
        nota1, nota2, nota3 <-- Z+
        Funcion: NotaFinal(dato not1, not2, not3 ε Z+)--> Z+
        Lexico local: prom ε Z+
        Inicio:
            si (not1 < 4) o (not2 < 4) o (not3 < 4) entonces
                prom <-- 2
            sino
                prom <-- (( not1 + not2 + not3) / 3)
            fsi
        Ffucion
    
    Inicio
        Entrada: nota1, nota2, nota3
        promedio <-- NotaFinal(nota1, nota2, nota3)

        si  (promedio < 5) entonces
            mensaje <-- "Libre"
        sino 
            si (promedio >=5) y (promedio < 7) entonces
                mensaje <-- "Regular" 
            sino
                mensaje <-- "Promocion"
            fsi
        fsi
        Salida <-- mensaje
    Fin

*/
#include <stdio.h>
#include <string.h>

char mensaje[30];
int nota1, nota2, nota3;
int promedio;

int NotaFinal(int not1,int not2,int not3);
int NotaValida(int nota);

int main(){

    // do
    // {
    //     printf("Ingrese la primer nota: \n");
    //     scanf("%d", &nota1);
    // } while (nota1 <= 0);
    // do
    // {
    //     printf("Ingrese la segunda nota: \n");
    //     scanf("%d", &nota2);
    // } while (nota2 <= 0);
    // do
    // {
    //     printf("Ingrese la tercer nota: \n");
    //     scanf("%d", &nota3);
    // } while (nota3 <= 0);

    
    nota1 = NotaValida(nota1);
    nota2 = NotaValida(nota2);
    nota3 = NotaValida(nota3);

    promedio = NotaFinal(nota1, nota2, nota3);

    if (promedio < 5){
        strcpy(mensaje, "Libre");
    }else if((promedio >=5) && (promedio < 7)){
        strcpy(mensaje, "Regular");
    }else{
        strcpy(mensaje, "Promocion");
    }
    printf("Tu nota es: %d, %s", promedio, mensaje);

    return 0;
}

int NotaValida(int nota){
    printf("Ingrese la nota: \n");
    scanf("%d", &nota);
    while (nota <= 0)
    {
        printf("Ingrese una nota valida\n");
        printf("Ingrese la nota: \n");
        scanf("%d", &nota);
    }
    
    return nota;
}

int NotaFinal(int not1,int not2,int not3){
    int prom;
    if ((not1 < 4) || (not2 < 4) || (not3 < 4)){
        prom = 2;
    }else{
        prom = ((not1+not2+not3)/3);
    }
    return prom;
}