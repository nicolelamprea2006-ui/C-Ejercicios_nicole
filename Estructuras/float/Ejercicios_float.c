#include <stdio.h>
#include <math.h>

int main() {

    // 1. Calcular el area de un circulo

    float radio;
    float area;
    float pi = 3.1416;

    printf("1. Ingresa el radio del circulo: ");
    scanf("%f", &radio);

    area = pi * radio * radio;

    printf("El area del circulo es: %.2f\n\n", area);


    // 2. Convertir grados Celsius a Fahrenheit

    float celsius;
    float fahrenheit;

    printf("2. Ingresa la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("La temperatura en Fahrenheit es: %.2f\n\n", fahrenheit);


    // 3. Calcular el promedio de tres numeros reales

    float numero1;
    float numero2;
    float numero3;
    float promedio;

    printf("3. Ingresa el primer numero: ");
    scanf("%f", &numero1);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &numero2);

    printf("Ingresa el tercer numero: ");
    scanf("%f", &numero3);

    promedio = (numero1 + numero2 + numero3) / 3;

    printf("El promedio es: %.2f\n\n", promedio);


    // 4. Determinar si un numero decimal es mayor que otro

    float decimal1;
    float decimal2;

    printf("4. Ingresa el primer numero decimal: ");
    scanf("%f", &decimal1);

    printf("Ingresa el segundo numero decimal: ");
    scanf("%f", &decimal2);

    if (decimal1 > decimal2) {
        printf("El primer numero es mayor que el segundo.\n");
    } 
    else if (decimal2 > decimal1) {
        printf("El segundo numero es mayor que el primero.\n");
    } 
    else {
        printf("Los dos numeros son iguales.\n");
    }

    printf("\n");


    // 5. Calcular la raiz cuadrada

    float numero;
    float raiz;

    printf("5. Ingresa un numero: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        raiz = sqrt(numero);
        printf("La raiz cuadrada es: %.2f\n", raiz);
    } 
    else {
        printf("No se puede calcular la raiz cuadrada de un numero negativo.\n");
    }

    return 0;
}