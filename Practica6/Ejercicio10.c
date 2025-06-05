#include <stdio.h>

int a,b;
void swap(int *x, int *y);
int main(){
    scanf("%d", &a);
    scanf("%d", &b);
    swap(&a,&b);
    printf("%d, %d", a, b);
    swap(&a,&a);
    printf("%d", a);
    return 0;
}

void swap(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}