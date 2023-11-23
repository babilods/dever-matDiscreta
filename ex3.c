#include <stdio.h>
#include <math.h>

int main() {
    double a1, q; 
    int n; 
    double a22; 

    printf("Digite o primeiro termo (a1): ");
    scanf("%lf", &a1);

    printf("Digite a razão (q): ");
    scanf("%lf", &q);

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    a22 = (a1 * (pow(q, n - 1))) / (q - 1);

    printf("O termo a22 é: %lf\n", a22);

    return 0;
}
