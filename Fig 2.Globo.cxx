#include <stdio.h>
#include <math.h>
int main() 
{
    //Figura.2 Foco
    double L,pi,at,pt;
    //Asignación de valores
    L=7; 
    pi=3.1416; 
    at=((pi*pow((3*L)/2,2))/2)+(2*(L*(3*L)))+(L*(3*L));
    pt=L*(7+2*sqrt(10)+1.5*pi);

    printf("El área total es: %f\n", at);
    printf("El perímetro total es: %f\n", pt);

    return 0;
}