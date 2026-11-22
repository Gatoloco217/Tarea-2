/*Miranda Quiroz Axel Tarea 2 Ejercicio 1*/
#include <stdio.h>
int main() {
    float num1, num2, suma, resta, multiplicacion;
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicacion: %.2f\n", multiplicacion);
    return 0;
}
