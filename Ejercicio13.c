/*Miranda Quiroz Axel Tarea 2 Ejercicio 13*/
#include <stdio.h>
#define TAM 100
int main() {
    int arreglo[TAM], n, i, suma = 0;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
    }
    printf("Suma total de los elementos: %d\n", suma);
    return 0;
}
