/*
Analisis: 
    $200*km -- hasta 300 km
    $200*km hasta 300 km + $75*km excedente -- de 300km hasta 1000km
    $200*km hasta 300 km + $75*km hasta 1000km + $50 excedente --- por encima de 1000km
    datos: kmRecorridos // numeros reales

    resultado: resultado // monto total dependiendo el kilometraje recorrido

    relacion:
        mensaje: "El monto total es:" y se cumple (kmRecorridos <= 300)
            resultado = 200 * kmRecorridos
        o bien 
        mensaje: "El monto total es:" y se cumple (kmRecorridos > 300 o < 1000)
            resultado = (200 * 300) + 75 * (kmRecorrido - 300
        o bien
        mensaje: "El monto total es:" y se cumple (kmRecorridos > 1000)
            resultado = (200 * 300) + 75 * (kmRecorrido - 300) + 50 * (kmRecorrido - 1000)

Diseño:
    lexico
        kmRecorridos ∈ R+
        resultado ∈ R+

    Inicio
        Entrada: kmRecorridos
        si (kmRecorridos <= 300) entonces
            resultado = 200 * kmRecorridos
        si no (kmRecorridos > 300 o < 1000) entonces
            resultado = (200 * 300) + 75 * (kmRecorrido - 300)
        si no (kmRecorridos > 1000) entonces
            resultado = (200 * 300) + (75 * 700) + 50 * (kmRecorrido - 1000)
*/

#include <stdio.h>


float kmRecorridos, resultado;

int main (){
    printf("Ingrese los KM recorridos: \n");
    scanf("%f", &kmRecorridos);
    
    if (kmRecorridos <= 0){
        printf("El numero ingresado no es correcto");
    
    }else if (kmRecorridos <= 300){
        resultado = 200 * kmRecorridos;
        printf("El total es: $%.0f", resultado);
        
    }else if (kmRecorridos > 300 && kmRecorridos <= 1000) {
        resultado = (200 * 300) + 75 * (kmRecorridos - 300);
        printf("El total es: $%.0f", resultado);

    }else if (kmRecorridos > 1000){
        resultado = (200 * 300) + (75 * 700) + 50 * (kmRecorridos - 1000);
        printf("El total es: $%.0f", resultado);
    }
    return 0;
}