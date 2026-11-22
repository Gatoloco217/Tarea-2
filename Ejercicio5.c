/*Miranda Quiroz Axel Tarea 2 Ejercicio 5*/
#include <stdio.h>
int main() {
    float compra, totalPagar;
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);
    if (compra > 2500) {
        totalPagar = compra - (compra * 0.08);
    } else {
        totalPagar = compra;
    }
    printf("Total a pagar: %.2f\n", totalPagar);
    return 0;
}
