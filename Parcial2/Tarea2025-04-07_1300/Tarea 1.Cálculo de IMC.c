#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para calcular el IMC
int toInt(char* text);
double toDouble(char* text);
// Función para convertir una cadena a entero
int toInt(char* text) {
    return atoi(text);
}

// Función para convertir una cadena a double
double toDouble(char* text) {
    return atof(text);
}
int main() {
    int Peso;
    double Estatura;

    printf("¿Cúal es su peso(kg)?\n");
    scanf("%d", &Peso);
    printf("¿Cúal es su estatura(m)?\n");
    scanf("%lf", &Estatura);
    
    double IMC;
    IMC = Peso/(Estatura*Estatura);
    
    printf("Tu IMC es de %.2f\n", IMC);
    if (IMC <= 18.4) {
        printf("Bajo Peso\n");
    } else if (IMC >= 18.5 && IMC <= 24.9) {
        printf("Normal\n");
    } else if (IMC >= 25.0 && IMC <= 29.9) {
        printf("Sobrepeso\n");
    } else if (IMC >= 30.0 && IMC <= 34.9) {
        printf("Obesidad clase 1\n");
    } else if (IMC >= 35.0 && IMC <= 39.9) {
        printf("Obesidad clase 2\n");
    } else if (IMC >= 40.0) {
        printf("Obesidad clase 3\n");
    } else {
        printf("ERROR, INTENTALO DE NUEVO\n");
    }
    return 0;
}

