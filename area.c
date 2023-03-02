//program to return area of a circle
#include <stdio.h>

int area(int pi,int r);
int main()
{
  int pi,r,result;
  printf("enter pi,r ");
  scanf("%d%d",&pi,&r);
  return 0;

  result=product (pi,r);
  printf("required area is %d",result);
}
int product (int pi, int r)
{
  int z;
  z=pi*r*r;
  return (z);
}
  