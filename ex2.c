#include <stdio.h>

int main() {

    int n; 
    double a35, an;
    double s; 

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    printf("Digite o último termo (an): ");
    scanf("%lf", &an);

    s = n * (a35 + an) / 2.0;

    printf("A soma dos termos da progressão é: %lf\n", s);

    return 0;
}