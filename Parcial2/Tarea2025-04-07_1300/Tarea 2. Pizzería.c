#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Headers
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
    char PizzaVeg[10];
    char Ingrediente[50];

    printf("¿Quiere una pizza vegetariana? (si/no)\n");
    scanf("%s", PizzaVeg);

    if (strcmp(PizzaVeg, "si") == 0) {
        printf("Okidoki, estos son los ingredientes que puede elegir, eliga solo uno, por favor\n");
        printf("-Pimiento\n");
        printf("-Tofu\n");
        scanf("%s", Ingrediente);
        printf("Delicioso! Marchando una pizza vegetariana con mozzarella, tomate y %s\n", Ingrediente);
    } else {
        printf("Okidoki, estos son los ingredientes que puede elegir, eliga solo uno, por favor\n");
        printf("-Peperoni\n");
        printf("-Jamón\n");
        printf("-Salmón\n");
        scanf("%s", Ingrediente);
        printf("Delicioso! Marchando una pizza NO vegetariana con mozzarella, tomate y %s\n", Ingrediente);
    }

    return 0;
}

