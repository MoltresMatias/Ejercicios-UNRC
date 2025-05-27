#include <stdio.h>


typedef struct 
{
    int dia;
    int mes;

}TFecha;

TFecha fecha;

int main(void){
    printf("Ingrese el dia\n");
    scanf("%d", &fecha.dia);
    printf("ingrese el mes\n");
    scanf("%d", &fecha.mes);
    printf("La fecha %d / %d pertenece a la estacion ", fecha.dia, fecha.mes );

    if (fecha.mes == 1 ||  fecha.mes == 2){
        printf("Verano");
    }else if (fecha.mes == 4 || fecha.mes == 5){
        printf("Otoño");
    }else if (fecha.mes == 7 || fecha.mes == 8){
        printf("Invierno");
    }else if (fecha.mes == 10 || fecha.mes == 11){
        printf("Primavera");
    }else if (fecha.mes == 3 && fecha.dia >= 21 || fecha.mes == 6 && fecha.dia <= 20){
        printf("otoño");
    }else if (fecha.mes == 6 && fecha.dia >= 21 || fecha.mes == 9 && fecha.dia <= 20){
        printf("invierno");
    }else if (fecha.mes == 9 && fecha.dia >= 21 || fecha.mes == 12 && fecha.dia <= 20){
        printf("primavera");
    }else if (fecha.mes == 12 && fecha.dia >= 21 || fecha.mes == 3 && fecha.dia <= 20){
        printf("verano");
    }
    return 0;
}
