/*Miranda Quiroz Axel Tarea 2 Ejercicio 3*/
#include <stdio.h>
#define TASA 11.96
int main() {
    float dolares, pesos;
    printf("Ingrese la cantidad en dolares: ");
    scanf("%f", &dolares);
    pesos = dolares * TASA;
    printf("%.2f dolares equivalen a %.2f pesos\n", dolares, pesos);
    return 0;
}
