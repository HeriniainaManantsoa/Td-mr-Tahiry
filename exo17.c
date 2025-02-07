#include  <stdio.h>

int main(void)
{  
  int nombre,i;
  long double somme=0,factorielle=1;
  printf ("sasir un nombre : ");
  scanf ("%d",&nombre);
  for (i=1;i<=nombre;i++)
  {
    factorielle = factorielle*i;
    somme = somme + 1/factorielle;
  }
  printf ("la somme des factorielle inverse est %Lf\n",somme);
  return (0);
}
