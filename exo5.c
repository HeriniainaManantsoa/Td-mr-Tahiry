#include  <stdio.h>
#include  <math.h>

int main()
{
  float a,b,c,delta,x1,x2;
  printf ("saisir les coefficients :\na= ");
  scanf ("%f",&a);
  printf ("b = ");
  scanf ("%f",&b);
  printf ("c = ");
  scanf ("%f",&c);
  delta=(b*b)-(4*a*c);
  if (a==0)
    {
       x1=(-b)/(2*a);
       printf ("la solution est : %f",x1);
    }
  else
    {
     if (delta > 0)
       {
          delta = sqrt(delta);
          x1 = (-b+delta)/(2*a);
          x2 = (-b-delta)/(2*a);
          printf ("Les solutions sont : %f et %f\n",x1,x2);
       }
      else if (delta==0)
      {
         x1 = (-b)/(2*a);
         printf ("La solution est : %f\n",x1);
      }
      else 
      {
        delta = sqrt(-delta);
        x1 = (-b)/(2*a);
        x2 = (delta)/(2*a);
        printf ("Les solutions sont : %f + %fi et %f - %fi\n",x1,x2,x1,x2);
      }
    }
  return (0);
}
