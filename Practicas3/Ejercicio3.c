#include <stdio.h>
#include <string.h>
/*
Analisis:
    Datos: num1, num2 //valores enteros 

    Resultados: resultado //cadena de texto y un valor numerico

    Relaciones: 
    mensaje= "El numer es:" y se cumple que num1>num2
    o bien
    mensaje "El numero es:" y se cumple que num1<num2

Diseño:
    lexico
        num1, num2  ∈ Z+ // datos del problema
        resultado  ∈ Z+ // resultado
    Inicio
        entrada: num1, num2
        si (num1>num2) entonces
            mensaje = "El resultado es num1 num2"
        si no (num1<num2) entonces
            mensaje = "El resultado es num2 num1"
        fsi
    Fin

*/

int num1, num2, resultado;

int main(){
    printf("Ingrese el primer numero: \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &num2); 

    if (num1>num2){
        printf("El resultado es: %d%d", num1, num2);
    }else if (num1<num2){
        printf("El resultado es: %d%d", num2, num1);
    }
}