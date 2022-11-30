#include  "ignaslib.h"

bool isInt (double x)

bool verificaInteiro(double x)
{
    int truncado = (int)x;
    return (x == truncado);
}

double xnay(double x, double y)
{
  if(y == 0)
    return 1.0;  
  
  double result = x;
  int i = 0;
  
bool isint();  
  if(isint(y) == true)
  {
    for(i = 0; i < y-1; i++)
    {
        result *= x;
    }
  }else
  {
    double fractionary_exponent();
    result = fractionary_exponent(x, y);
  }

  return result;
}

int digito_x(int x, int y)
{
    int digitoX = (int)fmod((x/(xnay(10, y))), 10);
    return digitoX;
}

double fractionary_exponent(double base, double valor)
{
    
  int i = 2;
  double j;
    
  while(fmod(j, 10) != 0)
  {
    j = valor * i;
    if(fmod(j,10) != 0)
    {
      i++;
    }
  }  
    return xnay(i, (j/i)*(log(base)/log(i)));
}

bool isint(double x)
{
    int trunked = (int)x;
    return (x == trunked);
}
