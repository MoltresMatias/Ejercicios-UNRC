#include <stdio.h>

float num1, num2, res;
char oper;
void ObtenerDatos(float *a, float *b, char *c);
void Calcular(float a, float b, char c, float *e);
void Mostrar(float e);

int main(){
    ObtenerDatos(&num1,&num2,&oper);
    Calcular(num1,num2,oper,&res);
    Mostrar(res);
    return 0;
}

void ObtenerDatos(float *a, float *b, char *c){
    printf("Ingrese el primer numero: \n");
    scanf("%f", &*a);
    printf("Ingrese el segundo numero: \n");
    scanf("%f", &*b);
    printf("Ingrese el operador: \n");
    scanf(" %c", &*c);
    while(!((*c == '+')||(*c == '-')||(*c == '/')||(*c == '*'))){
        printf("Ingrese un operador valido: \n");
        scanf(" %c", &*c);
    }
}

void Calcular(float a, float b, char c, float *e){
    
    if(c == '+'){
        *e = a + b;
    }else if(c == '-'){
        *e = a - b;
    }else if(c == '/'){
        if ((b==0)&&(c=='/')) {
        *e = 999999999;
    }else{
        *e = a / b;
        }
    }else if(c == '*'){

        *e = a * b;
    }
}

void Mostrar(float e){
    
    if (e == 999999999){
        printf("ERROR 999999999");
    }else{
        printf("El resultado es: %f", e);
    }
}