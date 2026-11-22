/*Miranda Quiroz Axel Tarea 2 Ejercicio 2*/
#include <stdio.h>
#define PI 3.14159265359
int main() {
    float radio, area, circunferencia;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;
    printf("Area: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);
    return 0;
}
