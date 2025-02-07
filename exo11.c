#include  <stdio.h>

int main(void)
{
  int nombre,i,factorielle=1;
  printf ("saisir un nombre : ");
  scanf ("%d",&nombre);
  for (i=1;i<=nombre;i++)
    factorielle = factorielle*i;
  printf ("%d! = %d\n",nombre,factorielle);
  return (0);
}
