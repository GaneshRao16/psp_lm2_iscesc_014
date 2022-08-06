// add int add
#include<stdio.h>
int add(int a,int b,int c,int d)
{
  int s=a+b+c+d;
  return s;
}
int main()
{
  int a,b,c,d;
  printf("Enter the numbers to be added\n");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  sum=add(a,b,c,d);
  printf("The sum of %d,%d,%d,%d is %d",a,b,c,d,sum);
  return 0;
}

