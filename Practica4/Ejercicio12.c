/*
Analisis:
    datos: alum, nota, i, 
    resultado: promedio
    relaciones:

        a partir de  alum se determina que:
            mensaje "el rendimieto es alto" si la (nota >8) y (nota <= 10)  o bien
            mensaje "el rendimieto es aceptable" si la (nota >=6) y (nota <=8 ) o bien
            mensaje "el rendimieto es bajo"  si la nota <6 " o bien

Lexico:
    alum, nota, i ∈ Z+
    promedio ∈ R+
    mensaje ∈ cadena
    Inicio 
        entrada: alum
        para(i = 0; i <= alum; i++) hacer
            entrada: nota
            si (nota >8) y (nota <= 10) entonces
                mensaje <-- el rendimieto es alto
            sino 
                si(nota >=6) y (nota <=8 ) entonces
                    mensaje <-- el rendimieto es aceptable
                sino
                    si nota <6 entonces
                        mensaje <-- el rendimieto es bajo
                    fsi
                fsi
            fsi
        spara
    Salida: mensaje

Fin

*/

#include <stdio.h>
#include <string.h>

int alum, nota, i, s;
float promedio;
char mensaje[32];

int main(){
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &alum);
    s = 0;
    for (i = 1; i<=alum; i++){
        printf("Ingrese la nota: ");
        scanf("%d", &nota);
        s = s + nota;
    }
    promedio = s / alum;
    if ((promedio>8) && (promedio<=10)){
        strcpy(mensaje, "el rendimiento es alto");
    }else if((promedio >=6) && (promedio <=8)){
        strcpy(mensaje, "el rendimiento es aceptable");
    }else if(promedio <6){
        strcpy(mensaje, "el rendimiento es bajo");
    }  
    printf("el promedio es %f y %s \n", promedio, mensaje); 
    
    return 0;
    }