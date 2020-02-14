#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade:");
    scanf("%d",&idade);

    idade -=1;

    printf("\nSua nova idade:%d\n",idade);
    
    idade += 1;
    
    printf("Sua idade original:%d\n",idade);

    return 0;
}
