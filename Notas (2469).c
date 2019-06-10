#include <stdio.h>

int main(void){

    int n, i , j, moda[101], ans = 0;
    int count[1000];

    scanf("%d", &n);
    int notas[n];

    for(i = 0; i < n; i++){
        scanf("%d", &notas[i]);
    }
    for(i = 0; i < n; i++){
        count[i] = 0;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(notas[i] == notas[j]){
                count[i]++;
            }
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(count[i] > count[j]){
                moda[j] = notas[i];
            }
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(moda[i] < moda[j]){
                ans = moda[i];
            }else if(moda[j] > moda[i]){
                ans = moda[j];
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}