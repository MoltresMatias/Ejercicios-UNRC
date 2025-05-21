#include <stdio.h>

int num = 1;
int i;

int main(){

    for (i=0; i<=100; i=i+1){
        if ((num % 2==0) && (num % 4==0) && (num % 6==0)) {
            printf("%d Es divisible \n", num);
        }
        num++;
    }
    return 0;
}