/*Rivarola Roberto Matias*/
#include <stdio.h>
#include <math.h>

int rectangulo = 0;
int circulo = 0;
float aX, bX, aY, bY; //puntos del rectangulo
float pX, pY; //puntos del problema
float cX, cY; //punto del centro del circulo
float radio;
float distancia;
float xIz, xDe, ySup, yInf; // determina la orientacion del rectangulo

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

    /*Determinar si el punto esta dentro o fuera del rectangulo*/
    if((pX >= xIz && pX <= xDe) && (pY >= yInf && pY <= ySup)){
        rectangulo = 1;
        
    }else{
        rectangulo = 0;
    }


    /*Determinar si el punto esta dentro del circulo*/
    distancia = sqrt(((pX-cX)*(pX-cX))+((pY-cY)*(pY-cY)));
    
    if (distancia <= radio){
        circulo = 1;
    }else{
        circulo = 0; 
    }

    /*Entregar el mensaje correspondiente*/
    if((rectangulo == 1) && (circulo == 1)){
        printf("El Punto es interior al circulo y al rectangulo");
    }else if ((rectangulo == 0) && (circulo == 1)){
        printf("El Punto es interior al circulo");
    }else if ((rectangulo == 1) && (circulo == 0)){
        printf("El Punto es interior al rectangulo");
    }else{
        printf("El Punto es exterior al circulo y al rectangulo");
    }

    return 0;
}