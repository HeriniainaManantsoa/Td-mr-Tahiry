#include  <stdio.h>

int main(void)
{
  float note1,note2,coef1,coef2,moyenne;
  printf ("Saisir deux notes et leurs coefficients respectives :\nnote1 = ");
  scanf ("%f",&note1);
  printf ("coefficient1 = ");
  scanf ("%f",&coef1);
  printf ("note2 = ");
  scanf ("%f",&note2);
  printf ("coefficient2 = ");
  scanf ("%f",&coef2);
  moyenne = ((note1*coef1)+(note2*coef2))/(coef1+coef2);
  printf ("la moyenne est : %f",moyenne);
  
  return (0);
}
