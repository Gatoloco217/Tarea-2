/*Miranda Quiroz Axel Tarea 2 Ejercicio 4*/
#include <stdio.h>
int main() {
    float capital, tasa, interes, montoFinal;
    printf("Ingrese el capital invertido: ");
    scanf("%f", &capital);
    printf("Ingrese la tasa de interes mensual (en porcentaje): ");
    scanf("%f", &tasa);
    interes = capital * (tasa / 100.0);
    montoFinal = capital + interes;
    printf("Interes del mes: %.2f\n", interes);
    printf("Monto total al final del mes: %.2f\n", montoFinal);
    return 0;
}
