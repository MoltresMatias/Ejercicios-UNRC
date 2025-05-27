/*
Analisis:
    0 < 5 --> Combo1
    5 >= & < 10 --> Combo2
    10 >= & < 18 --> Combo3
    datos <-- edad, 
    relacion:
        mensaje: "recibe el combo 1" y se cumple (edad < 5)
        o bien
        mensaje: "recibe el combo 2" y se cumple (edad >= 5 & edad < 10)
        o bien
        mensaje: "recibe el combo 3" y se cumple (edad >= 10 & edad < 18)
        o bien 
        mensaje: "no hay combo disponible" y se cumple (edad >= 18)
        o bien 
        mensaje: "edad invalida"

Diseño:
    datos: edad ∈ Z+
            mensaje ∈ cadena

    Inicio:
        entrada: edad
            segun:
                (edad < 5): mensaje <-- "recibe el combo 1"
                (edad >= 5 & edad < 10): mensaje <-- "recibe el combo 2"
                (edad >= 10 & edad < 18): mensaje <-- "recibe el combo 3"
                (edad >= 18): mensaje <-- "no hay combo disponile"
                otros: mensaje <-- "edad invalida"
            fsegun
    Fin
*/

#include <stdio.h>
#include <string.h>

int edad;
char mensaje[60];

int main() {
    printf("Ingrese la edad de niño: \n");
    scanf("%d", &edad);

    if (edad > 0 && edad < 5){
        strcpy(mensaje, "Recibe el combo 1");
    }else if (edad >= 5 && edad < 10){
        strcpy(mensaje, "Recibe el combo 2");
    }else if (edad >= 10 && edad < 18){
        strcpy(mensaje, "Recibe el combo 3");
    }else if (edad >= 18) {
        strcpy(mensaje, "No hay combo disponible");
    }else {
        strcpy(mensaje, "Ingrese una edad valida");
    }
    printf(mensaje);
    return 0;
}