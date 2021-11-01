#include <stdio.h>

// this is dev

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



