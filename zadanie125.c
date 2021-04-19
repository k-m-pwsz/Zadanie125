#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char liczba;

    float a;
    float b;
    float c;
    float objetosc_prostopadloscianu;
    float h;
    float objetosc_ostroslupa_prawidlowego_czworokatnego;


     do
    {
    printf ("Nacisnij 1 jesli ,aby obliczyc objetosc prostopadloscianu \nNacisnij 2 jesli chcesz obliczyc objetosc ostoslupa \nInna liczba = brak opcji\n");

    fflush(stdin);
    scanf ("%d", &liczba);

    switch(liczba)

{

case 1:
    printf ("\nPodaj dlugosc boku a\n");
    scanf ("%f", &a);

    printf ("\nPodaj dlugosc boku b\n");
    scanf ("%f", &b);

    printf ("\nPodaj dlugosc boku c\n");
    scanf ("%f", &c);


    objetosc_prostopadloscianu = a * b* c;



    printf("\nObjetosc prostopadloscianu wynosi:%.2f\n\n", objetosc_prostopadloscianu);
break ;



case 2:

    printf ("\nPodaj dlugosc boku a\n");
    scanf ("%f", &a);

    printf ("\nPodaj wysokosc ostroslupa h\n");
    scanf ("%f", &h);

    objetosc_ostroslupa_prawidlowego_czworokatnego = (a * a * h) / 3 ;
    printf("\nObjetosc ostroslupa wynosi:%.2f\n\n", objetosc_ostroslupa_prawidlowego_czworokatnego);


}

    }while(liczba > 0);



    return 0;
}
