#include <stdio.h>

int main(void){

    int M, N, i, it, x=0, c;

    for (i = 0; i < 100; i = i + 1){
        scanf("%d %d", &M, &N);
        if(M <= 0 || N <= 0){
            return 0;
        }
        if(M > N){
            c=M;
            M=N;
            N=c;
        }
        for(it = M; it <= N; it = it + 1){
            printf("%d ", it);
            x = x + it;
        }
        printf("Sum=%d\n", x);
        x = 0;
    }

    return 0;
}
