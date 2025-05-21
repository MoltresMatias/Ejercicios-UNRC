/*
Analisis:
    Datos:año, 
    Resultado: mensaje
    Relaciones:
        mensaje = AñoBisiesto

Diseño:
    Lexico:
        mensaje <-- logico

        Funcion: AñoBisiesto(Dato evaAño <-- Z+) --> logico
        Lexico local: i <-- Z+
        Inicio:
            si ((evaAño % 4 == 0) || ((evaAño%100 == 0) && (evaAño % 400 == 0))) entonces
                <-- verdadero
            sino
                <-- falso
            fsi
        fFuncion
    Inicio:
        Entrada: año
        mensaje <-- AñoBisiesto(año)
        Salida:mensaje

    Fin
*/

#include <stdio.h>
#include <string.h>

int año;
int verifica;
char mensaje[30];
int AñoBisiesto(int evaAño);

int main(){
    printf("Ingrese el ano: \n");
    scanf("%d", &año);

    verifica = AñoBisiesto(año);

    if (verifica == 1){
        strcpy(mensaje, "Verdadero, Ano Bisiesto");
    }else{
        strcpy(mensaje, "Falso, , Ano no Bisiesto");
    }

    printf(mensaje);

    return 0;
}

int AñoBisiesto(int evaAño){
    int i = 0;
    if ((evaAño % 4 == 0) || ((evaAño%100 == 0) && (evaAño % 400 == 0))){
        i = 1;
    }else{
        i = 0;
    }

    return i;
}