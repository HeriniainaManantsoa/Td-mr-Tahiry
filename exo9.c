#include  <stdio.h>

int main(void)
{
  int nombre,i;
  printf ("Saisir un nommbre : ");
  scanf ("%d",&nombre);
  for (i=2;i<=nombre;i+=2)
    printf ("%d ",i);
  return (0);
}
