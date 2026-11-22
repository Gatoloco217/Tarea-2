/*Miranda Quiroz Axel Tarea 2 Ejercicio 7*/
#include <stdio.h>
#define PRECIO_KM 0.23
int main() {
    float distanciaIda, distanciaTotal, precioBase, precioFinal;
    int diasEstancia;
    printf("Ingrese la distancia de ida en km: ");
    scanf("%f", &distanciaIda);
    printf("Ingrese los dias de estancia: ");
    scanf("%d", &diasEstancia);
    distanciaTotal = distanciaIda * 2;
    precioBase = distanciaTotal * PRECIO_KM;
    if (diasEstancia > 7 && distanciaTotal > 800) {
        precioFinal = precioBase * 0.70;
    } else {
        precioFinal = precioBase;
    }
    printf("Precio del boleto: %.2f\n", precioFinal);
    return 0;
}
