#include  <stdio.h>

int main(void)
{
  int nombre=0;
  printf ("Saisir un nombre : ");
  scanf ("%d",&nombre);
  if (nombre<0)
  {
    printf ("Le nombre %d est negatif\n",nombre);
  }
  else 
  {
    printf ("Le nombre %d est positif\n",nombre);
  }
  return (0);
}
