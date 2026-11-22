/*Miranda Quiroz Axel Tarea 2 Ejercicio 9*/
#include <stdio.h>
int main() {
    int n, i;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    printf("Tabla de multiplicar del %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
