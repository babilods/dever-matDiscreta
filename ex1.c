
#include <stdio.h>

int main() {
    int a35, r;

    printf("Digite a razão (r): ");
    scanf("%lf", &r);
    
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    double an = a35 + (n - 1) * r;

    printf("O termo a_%d e: %lf\n", n, an);

    return 0;
}