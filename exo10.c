#include  <stdio.h>

int main(void)
{
  int nombre,i;
  printf ("Saisir un nombre : ");
  scanf ("%d",&nombre);
  for (i=1;i<=nombre;i++)
    {
      if ((nombre%i) == 0)
        printf ("%d ",i);
    }
  return (0);
}
