#include <ctype.h>
#include <stdio.h>

int main() {

    
// 1. Mostrar el codigo ASCII de un caracter

    char caracter;

    printf("1. Ingresa un caracter: ");
    scanf(" %c", &caracter);

    printf("El caracter es: %c\n", caracter);
    printf("Su codigo ASCII es: %d\n\n", caracter);


 // 2. Determinar si es vocal o consonante

    char letra1;

    printf("2. Ingresa una letra: ");
    scanf(" %c", &letra1);

    letra1 = (char)tolower((unsigned char)letra1);

    if (!isalpha((unsigned char)letra1)) {
        printf("El caracter ingresado no es una letra.\n");
    } 
    else if (letra1 == 'a' || letra1 == 'e' || letra1 == 'i' ||
             letra1 == 'o' || letra1 == 'u') {
        printf("El caracter es una vocal.\n");
    } 
    else {
        printf("El caracter es una consonante.\n");
    }

    printf("\n");

// 3. Convertir una letra minuscula a mayuscula

    char letra2;

    printf("3. Ingresa una letra minuscula: ");
    scanf(" %c", &letra2);

    letra2 = (char)toupper((unsigned char)letra2);

    printf("La letra en mayuscula es: %c\n\n", letra2);


 // 4. Contar cuantas veces aparece una letra en una palabra

    char palabra[100];
    char letra3;
    int contador = 0;
    int i = 0;

    printf("4. Ingresa una palabra: ");
    scanf("%99s", palabra);

    printf("Ingresa la letra que quieres buscar: ");
    scanf(" %c", &letra3);

    while (palabra[i] != '\0') {

        if (palabra[i] == letra3) {
            contador++;
        }

        i++;
    }

    printf("La letra aparece %d veces.\n\n", contador);


 // 5. Verificar si un caracter es un digito numerico

    char numero;

    printf("5. Ingresa un caracter: ");
    scanf(" %c", &numero);

    if (isdigit((unsigned char)numero)) {
        printf("El caracter es un digito numerico.\n");
    } 
    else {
        printf("El caracter no es un digito numerico.\n");
    }

    return 0;
}