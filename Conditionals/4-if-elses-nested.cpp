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
        printf("\na = %d es el mas �peque�o.", a);
      }
    else
      {
        printf("\nc = %d es el mas �peque�o.", c);
      }
  }
  else
  {
    if(b < c)
    {
      printf("\nb = %d es el mas �peque�o.", b);
    }
    else
    {
      printf("\nc = %d Es el mas peque�o.", c);
    }
  }
  return 0;  
}


