#include  <stdio.h>

int main(void)
{  
  int nombre,i;
  long long somme=0,factorielle=1;
  printf ("sasir un nombre : ");
  scanf ("%d",&nombre);
  for (i=1;i<=nombre;i++)
  {
    factorielle = factorielle*i;
    somme = somme + factorielle;
  }
  printf ("la somme des factorielle est %Ld\n",somme);
  return (0);
}
