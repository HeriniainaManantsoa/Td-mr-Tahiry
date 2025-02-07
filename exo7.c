#include  <stdio.h>

int main(void)
{
  int nombre1,nombre2,nombre3,MAXIMUM;
  printf ("Saisir trois nombres :\nnombre1 = ");
  scanf ("%d",&nombre1);
  MAXIMUM = nombre1;
  printf ("nombre2 = ");
  scanf ("%d",&nombre2);
  if (nombre2>MAXIMUM)
    MAXIMUM = nombre2;
  printf ("nombre3 = ");
  scanf ("%d",&nombre3);
  if (nombre3>MAXIMUM)
    MAXIMUM = nombre3;
  printf ("Le maximum est %d\n",MAXIMUM);
  return (0);
}
