#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    float a;
    float b;
    float h;
    float objetosc_prostopadloscianu;

    printf("podaj dlugosc a:");
    scanf("%f", &a);

    printf("podaj dlugosc b:");
    scanf("%f", &b);

    printf("podaj wysokosc h:");
    scanf("%f", &h);

    objetosc_prostopadloscianu = (a*b)*h;
    printf("objetosc prostopadloscianu wynosi : %f ", objetosc_prostopadloscianu);
    return 0;
}
