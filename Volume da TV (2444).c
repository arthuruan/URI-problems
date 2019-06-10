#include <stdio.h>

int main(void){

    int v, t, i;

    scanf("%d %d", &v, &t);
    int ar[t];

    for(i = 0; i < t; i++){
        scanf("%d", &ar[i]);
        
        v += ar[i];

        if(v > 100){
            v = 100;
        }
        if(v < 0){
            v = 0;
        }
    }

    printf("%d\n", v);

    return 0;
}