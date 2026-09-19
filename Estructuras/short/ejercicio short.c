#include <stdio.h>
 
int main() {
 
   
    // EJERCICIO 1: Edades de varias personas
   
    short edad1 = 18;
    short edad2 = 20;
    short edad3 = 25;
    short edad4 = 30;
    short edad5 = 22;
 
    printf("Edad de la persona 1: %d\n", edad1);
    printf("Edad de la persona 2: %d\n", edad2);
    printf("Edad de la persona 3: %d\n", edad3);
    printf("Edad de la persona 4: %d\n", edad4);
    printf("Edad de la persona 5: %d\n", edad5);
 
 
 
    // EJERCICIO 2: Suma de dos numeros short
 
    short numero1 = 10;
    short numero2 = 20;
    short resultado;
 
    resultado = numero1 + numero2;
 
    printf("La suma es: %d\n", resultado);
 
 
 
    // EJERCICIO 3: Multiplo de 5
   
    short numero = 25;
 
    if (numero % 5 == 0) {
        printf("El numero %d es multiplo de 5\n", numero);
    } else {
        printf("El numero %d no es multiplo de 5\n", numero);
    }
 
 
   
    // EJERCICIO 4: Contar numeros pares
   
    short numeros[6] = {2, 5, 8, 11, 14, 17};
    short cantidadPares = 0;
 
    for (int i = 0; i < 6; i++) {
 
        if (numeros[i] % 2 == 0) {
            cantidadPares++;
        }
    }
 
    printf("Cantidad de numeros pares: %d\n", cantidadPares);
 
 
   
    // EJERCICIO 5: Convertir short a binario
   
    short numeroBinario = 10;
    short binario[16];
    int i = 0;
 
    while (numeroBinario > 0) {
 
        binario[i] = numeroBinario % 2;
        numeroBinario = numeroBinario / 2;
        i++;
    }
 
    printf("Numero en binario: ");
 
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
 
    printf("\n");
 
    return 0;
}
 