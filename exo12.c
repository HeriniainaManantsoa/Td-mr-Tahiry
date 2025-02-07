#include  <stdio.h>

int main(void)
{
  int nombre,i,somme=0;
  printf ("Saisir un nombre : ");
  scanf ("%d",&nombre);
  for (i=1;i<=nombre;i++)
    somme = somme + i;
  printf ("la somme est %d\n",somme);
  return (0);
}
