#include  <stdio.h>

int main(void)
{
  int nombre,i,produit=1;
  printf ("saisir un nombre : ");
  scanf ("%d",&nombre);
  for (i=1;i<=nombre;i++)
    produit = produit*i;
  printf ("le produit est %d\n",produit);
  return (0);
}
