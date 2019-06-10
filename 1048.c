#include <stdio.h>

int main(void)
{
    double R, i;

scanf("%lf", &R);

    if (R>0 && R<=2000){
        printf("Isento\n");
        return 0;}
    if (R>=2000.01 && R<=3000){
        i = R*15/100;
        printf("R$ %.2lf\n", i);
        return 0;}



    return 0;
}
