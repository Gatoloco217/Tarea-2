/*Miranda Quiroz Axel Tarea 2 Ejercicio 15*/
#include <stdio.h>
#define TAM 100
int main() {
    int arreglo[TAM], n, i, positivos = 0, negativos = 0, nulos = 0;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        if (arreglo[i] > 0) positivos++;
        else if (arreglo[i] < 0) negativos++;
        else nulos++;
    }
    printf("\nPositivos: %d\nNegativos: %d\nNulos: %d\n", positivos, negativos, nulos);
    return 0;
}
