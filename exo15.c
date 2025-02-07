#include  <stdio.h>
#include  <math.h>

int main(void)
{  
  long long nombre,i,somme=0;
  printf ("sasir un nombre : ");
  scanf ("%Ld",&nombre);
  for (i=0;i<=nombre;i++)
    somme = somme + pow(10,i);
  printf ("la somme des puissance de 10 est %Ld\n",somme);
  return (0);
}
