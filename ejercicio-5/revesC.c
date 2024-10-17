#include <stdio.h>
// ejercicio 5 tabla de Fahrenheit-Celsius desde 300 hasta 0
/* Imprime la tabla Fahrenheit-Celsius
   para fahr = 0, 20, ..., 300; versión de punto flotante */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;    //límite inferior de la tabla de temperaturas
    upper = 300;  // límite superior 
    step = 20;    //tamaño del incremento 

    // Imprimir el encabezado 
    printf("Fahrenheit  Celsius\n");
 
    celsius = upper;
    while (celsius <= upper && celsius != lower) {
        fahr = (celsius * 1.8) + 32;
        printf("%3.0f %12.1f\n", fahr, celsius);  // Se ajusta el formato para alinear mejor
        celsius = celsius - step;
    }

    return 0;
}
