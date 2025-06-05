#include <stdio.h>
#include <string.h>

float p, h;
char imc[40];
void Indice(float a, float b, char *msge);
int main() {
    printf("Ingrese su peso: ");
    scanf("%f", &p);
    printf("Ingrese su altura: ");
    scanf("%f", &h);
    Indice(p, h, imc);
    printf("%s", imc);
    return 0;
}

void Indice(float a, float b, char *msge){
    float c;
    c = a / (b*b);
    if (c < 25){
        sprintf(msge, "Su IMC es de: %f es normal", c);
    }else if((c >= 25)&&(c <= 30)){
        sprintf(msge, "Su IMC es de: %f es sobrepeso", c);
    }else{
        sprintf(msge, "Su IMC es de: %f es obesidad, Consulte con su medico", c);
    }
}
