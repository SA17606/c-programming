//fuction of area of a circle
#include<stdio.h>
#define pi 3.142
int area(int r);
int main()
{
    int r,result;
    printf("\nEnter the radius:");
    scanf("%d",&r);
    
    result=pi*r*r;
    printf("\nThe area of a circle is: %d",result);
    
    return 0;
}

int area(int r)
{
    int answer;
    answer= pi*r*r;
    
    return answer;
}
