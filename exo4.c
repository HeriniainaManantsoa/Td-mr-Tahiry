#include  <stdio.h>

int main(void)
{
  float note1,note2,somme,moyenne;
  printf ("Saisir deux notes :\nnote1 = ");
  scanf ("%f",&note1);
  printf ("note2 = ");
  scanf ("%f",&note2);
  somme = note1+note2;
  moyenne = somme/2;
  printf ("la somme des deux notes est %f\nla moyenne est %f\n",somme,moyenne);
  return (0);
}
