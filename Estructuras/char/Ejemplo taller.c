#include <ctype.h>
#include <stdio.h>

//1. Escribe un programa que lea un carácter y muestre su código ASCII.

int main() {

    char letra;

    printf("Ingresa un caracter: ");
    scanf(" %c", &letra);

    printf("El caracter es: %c\n", letra);
    printf("Su codigo ASCII es: %d\n", letra);

    return 0;
}

// Crea un programa que determine si un carácter es una vocal o consonante.
