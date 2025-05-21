#include <stdio.h>

int n;
int sum = 0;
int i = 1;

int main(){
    printf("Ingrese un numero natural: \n");
    scanf("%d", &n);

    if (n > 0){
        while (i <= n){
            sum = sum + i;
            i++;
        }
        printf("la suma es: %d", sum);
        
    }

    return 0;
}