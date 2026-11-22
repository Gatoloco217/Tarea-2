/*Miranda Quiroz Axel Tarea 2 Ejercicio 6*/
#include <stdio.h>
int main() {
    float sueldo, nuevoSueldo;
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    if (sueldo < 1000) {
        nuevoSueldo = sueldo * 1.15;
    } else {
        nuevoSueldo = sueldo * 1.12;
    }
    printf("Sueldo con aumento: %.2f\n", nuevoSueldo);
    return 0;
}
