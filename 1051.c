#include <stdio.h>

int main(void)
{
    double R, i;

scanf("%lf", &R);

    if (R<=2000){
        printf("Isento\n");
        return 0;}
    if (R>2000 && R<3000){
        i = (R-2000)*8/100;
        printf("R$ %.2lf\n", i);
        return 0;}
    if (R>=3000.01 && R<=4500){
        i = (R-3000)*0.18 + (1000*0.08);
        printf("R$ %.2lf\n", i);
        return 0;}
    if (R>4500.00){
        i = (R-4500)*0.28 + (1500*0.18) + (1000*0.08);
        printf("R$ %.2lf\n", i);
        return 0;}
}
