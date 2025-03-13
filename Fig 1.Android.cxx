#include <stdio.h>
#include <math.h>
int main()
{
    //Fig.1 Android
    double L,pi,at,pt;
    //Asignación de valores 
    L=7;
    pi=3.1416;
    at=(pow(L,2))+((pi*pow(L,2))/8)+(6.0/25.0*(pow(L,2)))+(2.0/25.0*(pow(L,2)));
    pt=(pi*L/2)+(2*L)+(2*L)+(3*(L/5));
    
    printf("El área total es %f\n",at);
    printf("El perímetro total es %f\n",pt);
    return 0;
}