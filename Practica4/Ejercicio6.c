#include <stdio.h>

int i = 1;


int main(){
    if (i > 0){
        while (i < 8)
        {
            printf("Soy i, mi valor es: %d \n", i);
            i++;
        }
        printf("Soy yo de nuevo, valgo: %d \n", i);
        
    }else{
        printf("Solo se que no se nada");
    }

    return 0;
}