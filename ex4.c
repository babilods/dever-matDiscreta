#include <stdio.h>
#include <math.h>

int main() {
    double a, r, q; 
    int n; 
    double s22; 

    printf("Digite o primeiro termo (a): ");
    scanf("%lf", &a);

    printf("Digite a razão (r): ");
    scanf("%lf", &r);

    printf("Digite a base (q): ");
    scanf("%lf", &q);

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    s22 = (a * r * (pow(q, n) - 1)) / (q - 1);

    printf("A soma s22 é: %lf\n", s22);

    return 0;
}