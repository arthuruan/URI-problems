#include <stdio.h>

int main(void)
{
    int N, i, S, X, t;

    scanf("%d",&N);

    for(i=1;i<=N;i++){
        scanf("%d", &X);
        S=0;
        for(t=1; t<X; t++)
        {
            if(X%t==0){
                S=S+t;
            }
        }if(S==X){
            printf("%d eh perfeito\n", X);
        }else{
            printf("%d nao eh perfeito\n", X);
        }
    }
    return 0;
}
