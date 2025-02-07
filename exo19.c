#include  <stdio.h>

int main(void)
{
  int a,b,c,diviseur,dividande,reste;
  printf ("saisir deux entiers :\nnombre1 = ");
  scanf ("%d",&a);
  printf ("nombre2 = ");
  scanf ("%d",&b);
  dividande = b;
  diviseur = a;
  if (a>b)
  {
    dividande =  a;
    diviseur = b;
  }
  reste = 1;
  while (reste != 0)
  {
    reste = dividande%diviseur;
    dividande = diviseur;
    diviseur = reste;
  }
  if (dividande == 1)
  {
    printf ("%d et %d sont premier entre eux\n",a,b);
  }
  else 
  {
    printf ("%d et %d ne sont pas premier entre eux\n",a,b);
  }
  return (0);
}
