#include  <stdio.h>

int main(void)
{
  int nombre,i;
  printf ("Saisir un nombre : ");
  scanf ("%d",&nombre);
  for (i=1;i<=nombre;i++)
    printf ("%d ",i);
  return (0);
}
