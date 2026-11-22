/*Miranda Quiroz Axel Tarea 2 Ejercicio 16*/
#include <stdio.h>
#define TAM 100
int main() {
    int pares[TAM], i;
    for (i = 0; i < TAM; i++) {
        pares[i] = (i + 1) * 2;
    }
    printf("Los primeros 100 numeros pares son:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", pares[i]);
        if ((i + 1) % 10 == 0) printf("\n");
    }
    return 0;
}
