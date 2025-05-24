#include <stdio.h>
#include <math.h>

float aX, bX, aY, bY; //puntos del rectangulo
float pX, pY; //puntos del problema
float cX, cY; //punto del centro del circulo
float radio;
float xIz, xDe, ySup, yInf; // determina la orientacion del rectangulo
int EstaDentroRectangulo(float a,float b,float c,float d,float e,float f);
int EstaDentroCirculo(float a,float b,float c,float e,float f);
int main(){
    printf("Ingrese el primer punto del rectangulo, primero X: \n");
    scanf("%f", &aX);
    printf("Ingrese el primer punto del rectangulo, luego Y: \n");
    scanf("%f", &aY);
    printf("Ingrese el segundo punto del rectangulo, primero X: \n");
    scanf("%f", &bX);
    printf("Ingrese el segundo punto del rectangulo, luego Y: \n");
    scanf("%f", &bY);
    printf("Ingrese el punto del problema, primero X: \n");
    scanf("%f", &pX);
    printf("Ingrese el punto del problema, luego Y: \n");
    scanf("%f", &pY);
    printf("Ingrese punto del circulo, primero X: \n");
    scanf("%f", &cX);
    printf("Ingrese punto del circulo, luego Y: \n");
    scanf("%f", &cY);
    printf("Ingrese el radio: \n");
    scanf("%f", &radio);
    /*Determinar X izquierdo y derecho*/
    if (aX < bX){
        xIz = aX;
        xDe = bX;
    }else {
        xDe = aX;
        xIz = bX;
    }

    /*Determinar Y superior e inferior*/
    if (aY > bY){
        ySup = aY;
        yInf = bY;
    }else {
        ySup = bY;
        yInf = aY;
    }

    if (EstaDentroRectangulo(xIz,xDe,ySup,yInf,pX,pY)){
        printf("Esta dentro del rectangulo \n");
    }else if(EstaDentroCirculo(cX,cY,radio,pX,pY)){
        printf("Esta dentro del circulo \n");
    }else{
        printf("No esta dentro del rectangulo, ni del circulo \n");
    }

    return 0;
}

int EstaDentroRectangulo(float a,float b,float c,float d,float e,float f){
    if (((e >= a)&&(e<=b)) && ((f>=c)&&(f<=d))){
        return 1;
    }else{
        return 0;
    }
}

int EstaDentroCirculo(float a,float b,float c,float e,float f){
    float distancia;
    distancia = sqrt(((e-a) * (e-a)) + ((f-b) * (f-b)));

    if (distancia <= c){
        return 1;
    }else{
        return 0;
    }
}
