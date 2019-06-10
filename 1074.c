#include <stdio.h>

int main(void){
    int N, i, M;

    scanf("%d", &N);
    for (i = 0;i < N;i++){
        scanf("%d", &M);
        if(M % 2 == 0 && M > 0){
            printf("EVEN POSITIVE\n");
        }else if(M % 2 == 0 && M < 0){
            printf("EVEN NEGATIVE\n");
        }else if(M % 2 != 0 && M > 0){
            printf("ODD POSITIVE\n");
        }else if(M % 2 != 0 && M < 0){
            printf("ODD NEGATIVE\n");
        }else if(M == 0){
            printf("NULL\n");
        }
    }
    return 0;
}
