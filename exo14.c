#include  <stdio.h>

int main(void)
{  
  float nombre,i,somme=0;
  printf ("sasir un nombre : ");
  scanf ("%f",&nombre);
  for (i=1;i<=nombre;i++)
    somme = somme + 1/i;
  printf ("la somme des inverses est %f\n",somme);
  return (0);
}
