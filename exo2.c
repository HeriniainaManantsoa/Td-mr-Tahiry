#include  <stdio.h>

int main(void)
{
  int nombre1,nombre2;
  printf ("Saisi deux nombres :\nnombre1 =  ");
  scanf ("%d",&nombre1);
  printf ("nombre2 = ");
  scanf ("%d",&nombre2);
  if ((nombre1<0 && nombre2<0) || (nombre1>0 && nombre2>0))
  {
    printf ("Le produit des deux nombres est positif\n");
  }
  else
  {
    printf ("Le produit des deux nombres est negatif\n");
  }
  return (0);
}
