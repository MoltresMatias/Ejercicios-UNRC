/*
Analisis:
    30 - x --> 140000
    29 - 15 --> 200000
    14 - 1 --> 250000
    datos: opcion, //boleano
        diaResta //valores entero
    Resultado: valorTotal // entero
    Relaciones:
            mensaje: "El costo de su vuelo es de: " y se cumple (diaResta > 30)
                valoTotal <-- 140.000 * diaResta
            o bien
            mensaje: El costo total es de: y se cumple (diaResta <= 29 & diaResta >= 15)
                valorTotal <-- 200.000 * diaResta
            o bien 
            mensaje El costo total es de: y se cumple (diaResta <= 14 & edad >= 1)
                valoTotal <-- 250.000 * diaResta

            opcion 1 y se cumple (opcion == 1)
                mensaje: valorTotal
            o bien
            opcion 2 y se cumple (opcion == 2)
                mensaje: valorTotal <-- valorTotal * 2

Diseño:
    datos:
        diaResta, opcion ∈ Z+ // Datos de entrada
        valorTotal ∈ R+ // resultado

    Inicio
        entrada: diaResta, opcion

        segun:
            (diaResta >= 30): valoTotal <-- 140000 * diaResta
            (diaResta <= 29 & diaResta >= 15): valoTotal <-- 200000 * diaResta
            (diaResta <= 14 & diaResta >= 1): valoTotal <-- 250000 * diaResta
        fsegun

        si (opcion = 1) entonces
            valorTotal 
        sino (opcion = 2) enstonces
            valorTotal * 2
        fsi
    Fin

*/

#include <stdio.h>
#include <string.h>

int opcion, diaResta;
double valorTotal;

int main(){
    printf("ingrese la cantidad de dias que restan para su vuelo: \n");
    scanf("%d", &diaResta);
    printf("ingrese una de las dos opciones: \n");
    printf("Opcion 1: Vuelos de Ida\n");
    printf("Opcion 2: Vuelos de Ida y Vuelta\n");
    scanf("%d", &opcion);

    if (diaResta >= 30){
        valorTotal = 140000;
    }else if (diaResta <= 29 && diaResta >= 15){
        valorTotal = 200000;
    }else if (diaResta <= 14 && diaResta >= 1){
        valorTotal = 250000;
    }

    if (opcion == 1){
        valorTotal = valorTotal;
    }else if(opcion == 2) {
        valorTotal = valorTotal * 2;
    }
    printf("la opcion elegida fue %d por lo cual el costo total es de: %.0f", opcion, valorTotal);
    return 0;
}
