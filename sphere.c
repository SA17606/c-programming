//program to return volume of a sphere
#include <stdio.h>

int volume(int pi,int r);
int main()
{
  int pi,r,result;
  printf("enter pi,r ");
  scanf("%d%d",&pi,&r);
  return 0;

  result=product (pi,r);
  printf("required volume is %d",result);
}
int product (int pi, int r)
{
  int z;
  z=(4/3)*pi*r*r*r;
  return (z);
}
  