/*Miranda Quiroz Axel Tarea 2 Ejercicio 12*/
#include <stdio.h>
int main() {
    int n, i;
    long long producto = 1;
    printf("Ingrese el valor de N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        producto *= i;
    }
    printf("Producto de los %d primeros numeros: %lld\n", n, producto);
    return 0;
}
