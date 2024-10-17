#include <stdio.h>
//ejercicio 3 tabla de Fahrenheit a Celsius
/* Imprime la tabla Fahrenheit-Celsius
   para fahr = 0, 20, ..., 300; versión de punto flotante */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    //límite inferior de la tabla de temperaturas
    upper = 30;  // límite superior 
    step = 1;    //tamaño del incremento 

    // Imprimir el encabezado 
    printf("Fahrenheit  Celsius\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %12.1f\n", fahr, celsius);  // Se ajusta el formato para alinear mejor
        fahr = fahr + step;
    }

    return 0;
}
