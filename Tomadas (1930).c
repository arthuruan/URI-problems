#include <stdio.h>

int main(void){
    
    int ar[4], soma = 0, i;

    for(i = 0; i < 4; i++){
        scanf("%d", &ar[i]);
        
        soma += ar[i];
    }
    
    printf("%d\n", soma - 3);

    return 0;
}