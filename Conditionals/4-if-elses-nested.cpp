#include <stdio.h>

int main(int argc, char *argv[])
{
  int a, b, c;
  printf("Ingresa 3 numeros = ");
  scanf("%d%d%d", &a, &b, &c);
  if (a < b)
  {
    if (a < c)
      {
        printf("\na = %d es el mas ´pequeño.", a);
      }
    else
      {
        printf("\nc = %d es el mas ´pequeño.", c);
      }
  }
  else
  {
    if(b < c)
    {
      printf("\nb = %d es el mas ´pequeño.", b);
    }
    else
    {
      printf("\nc = %d Es el mas pequeño.", c);
    }
  }
  return 0;  
}


