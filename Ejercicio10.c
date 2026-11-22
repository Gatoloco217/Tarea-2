/*Miranda Quiroz Axel Tarea 2 Ejercicio 10*/
#include <stdio.h>
int main() {
    int i, num, positivos = 0, negativos = 0, nulos = 0;
    for (i = 1; i <= 100; i++) {
        printf("Ingrese el numero %d/100: ", i);
        scanf("%d", &num);
        if (num > 0) positivos++;
        else if (num < 0) negativos++;
        else nulos++;
    }
    printf("\nPositivos: %d\nNegativos: %d\nNulos: %d\n", positivos, negativos, nulos);
    return 0;
}
