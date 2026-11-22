/*Miranda Quiroz Axel Tarea 2 Ejercicio 11*/
#include <stdio.h>
int main() {
    int i, suma = 0;
    for (i = 10; i <= 50; i += 2) {
        suma += i;
    }
    printf("Suma de numeros pares del 10 al 50: %d\n", suma);
    return 0;
}
