#include <stdio.h>

// see hwo does the array look like

void func(double a[])
{
  a[0]=2.0;
  return;

}


int main(void)
{
  double a[2]={1.0,1.0};

  func(a);

  printf("%f\n",a[0]);

  return 0;
}



