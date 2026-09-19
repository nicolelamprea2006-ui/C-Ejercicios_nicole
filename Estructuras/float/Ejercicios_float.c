#include <stdio.h>

#include <math.h>
 
 
void ejercicio1() {
 
    // EJERCICIO 1: Area de un circulo
 
    float radio;

    float area;

    float pi = 3.1416;
 
    printf("Ingresa el radio del circulo: ");

    scanf("%f", &radio);
 
    area = pi * radio * radio;
 
    printf("El area del circulo es: %.2f\n", area);

}
 
 
void ejercicio2() {
 
    // EJERCICIO 2: Celsius a Fahrenheit
 
    float celsius;

    float fahrenheit;
 
    printf("Ingresa la temperatura en grados Celsius: ");

    scanf("%f", &celsius);
 
    fahrenheit = (celsius * 9 / 5) + 32;
 
    printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);

}
 
 
void ejercicio3() {
 
    // EJERCICIO 3: Promedio de tres numeros
 
    float numero1;

    float numero2;

    float numero3;

    float promedio;
 
    printf("Ingresa el primer numero: ");

    scanf("%f", &numero1);
 
    printf("Ingresa el segundo numero: ");

    scanf("%f", &numero2);
 
    printf("Ingresa el tercer numero: ");

    scanf("%f", &numero3);
 
    promedio = (numero1 + numero2 + numero3) / 3;
 
    printf("El promedio es: %.2f\n", promedio);

}
 
 
void ejercicio4() {
 
    // EJERCICIO 4: Comparar numeros decimales
 
    float decimal1;

    float decimal2;
 
    printf("Ingresa el primer numero decimal: ");

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

}
 
 
void ejercicio5() {
 
    // EJERCICIO 5: Raiz cuadrada
 
    float numero;

    float raiz;
 
    printf("Ingresa un numero: ");

    scanf("%f", &numero);
 
    if (numero >= 0) {
 
        raiz = sqrt(numero);
 
        printf("La raiz cuadrada es: %.2f\n", raiz);
 
    }

    else {
 
        printf("No se puede calcular la raiz cuadrada de un numero negativo.\n");

    }

}
 
 
// ========================================

// MAIN

// ========================================
 
int main() {
 
    ejercicio1();
 
    ejercicio2();
 
    ejercicio3();
 
    ejercicio4();
 
    ejercicio5();
 
    return 0;

}
 