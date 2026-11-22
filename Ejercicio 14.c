/*Miranda Quiroz Axel Tarea 2 Ejercicio 14*/
#include <stdio.h>
#define TAM 100
int main() {
    int arreglo[TAM], n, i, buscado, contador = 0;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &buscado);
    for (i = 0; i < n; i++) {
        if (arreglo[i] == buscado) contador++;
    }
    printf("El numero %d aparece %d veces en el arreglo\n", buscado, contador);
    return 0;
}
