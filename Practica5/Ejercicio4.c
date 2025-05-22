#include <stdio.h>
#include <math.h>

int a, x , resInc, resCub, resPar, resMul, resPot;
int Inc(int i);
int Cubo(int k);
int Par(int i);
int Multiplo(int k,int i);
int Potencia(int k,int i);

int main(){
    printf("Ingrese dos valores: \n");
    scanf("%d", &a);
    scanf("%d", &x);
    resInc = Inc(x);
    resCub = Cubo(a);
    resPar = Par(x);
    resMul = Multiplo(a,x);
    resPot = Potencia(a,x);
    
    printf("%d, %d, %d, %d, %d", resInc, resCub, resPar, resMul, resPot);
    return 0;
}

int Inc(int i){
    i++;
    return i;
}

int Cubo(int k){
    k = k * k * k;
    return k;
}

int Par(int i){
    int p;
    if (i%2 == 0){
        p = 1;
    }else{
        p = 0;
    }
    return p;
}

int Multiplo(int k,int i){
    int f;
    if (k%i == 0){
        f = 1;
    }else{
        f = 0;
    }
    return f;
}

int Potencia(int k, int i){
    int d;
    d = pow(k, i);
    return d;
}