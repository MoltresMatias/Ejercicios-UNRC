#include <stdio.h>

char car;

int Ninguno(char e);
int EsMayuscula(char c);
char AMinuscula(char c);
int EsVocal(char c);
int EsConsonante(char a);

int main(){
    printf("Ingrese un caracter: \n");
    scanf("%c", &car);


    if(!(Ninguno(car))){
        printf("No es consonante, ni vocal");
    }else if (EsVocal(car)){
        printf("Es vocal");
    }else if (EsConsonante(car)){
        printf("Es consonante");
    }
    return 0;
}

int Ninguno(char e){
    
    if ((e >='A' && e <= 'Z')||(e >='a' && e <='z')){
        return 1;
    }else{
        return 0;
    }
}

int EsMayuscula(char c){   
    if ((c >= 'A') && (c <= 'Z')){
        return 1;
    }else{
        return 0;
    }
}

char AMinuscula(char c){
    return (c + ('a'-'A'));
}

int EsVocal(char c){
    char minus;
    if (EsMayuscula(c)){
        minus = AMinuscula(c);
    }else{
        minus = c;
    }
    return ((minus == 'a') || (minus == 'e') || (minus == 'i') || (minus == 'o') || (minus == 'u'));
}

int EsConsonante(char a){
    if (EsVocal(a)){
        return 0;
    }else{
        return 1;
    }
}