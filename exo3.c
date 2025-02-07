#include  <stdio.h>

int main(void)
{
  int nombre1,nombre2,nombre3,stockage;
  printf ("Saisir trois nombres :\nnombre1 = ");
  scanf ("%d",&nombre1);
  printf ("nombre2 = ");
  scanf ("%d",&nombre2);
  printf ("nombre3 = ");
  scanf ("%d",&nombre3);
  stockage = nombre1;
  nombre1 = nombre2;
  nombre2 = nombre3;
  nombre3 = stockage;
  printf ("Apres echange :\nnombre1 = %d\nnombre2 = %d\nnombre3 = %d\n",nombre1,nombre2,nombre3);
  return (0);
}
