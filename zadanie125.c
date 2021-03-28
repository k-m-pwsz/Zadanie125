#include <stdio.h>
#include <stdlib.h>




int main()
{
for(;;)
{
int c=68 ;
int a;
int b;
int wynik;
int pods_a;
int pods_b;
int h;
int wynik2;
int t;
int wys_h;
printf("wybierz cos\n");
printf("1.pole ptostopadloscianu\n");
printf("2.pole ostroslupa\n");
printf("3. wyjscie\n");
scanf("%d", &c);
switch (c)

{

case 1:

    printf("wprowadz dlugosc boku a\n");
    scanf("%d", &a);
    printf("wprowadz dlugosc boku b\n");
    scanf("%d", &b);
    printf("wprowadz wysokosc h\n");
    scanf("%d", &h);
    wynik = (a*b)*h;
    printf("wynik=" "%d\n", wynik);

    break;
case 2:

    printf("wprowadz dlugosc boku a\n");
    scanf("%d", &pods_a);
    printf("wprowadz dlugosc boku b\n");
    scanf("%d", &pods_b);
    printf("wprowadz wysokosc h\n");
    scanf("%d", &wys_h);
    wynik2 = (pods_a*pods_b)*wys_h;
    printf("wynik=" "%d\n", wynik2);
    break;
case 3:
   return 0;
default:
  printf("Zly wybor\n");
}


}
    return 0;

}
