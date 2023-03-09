#include <stdio.h>

int main() {
  int r,c;
  int marks[2][3]={{2,4,6},{1,5,6}};
  for(r=0;r<2;r++)
  {
    for(c=0;c<3;c++){
      printf("%d ",marks[r][c]);
    }}
    return 0;
}
  
