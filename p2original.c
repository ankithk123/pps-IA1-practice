#include<stdio.h>

void input(int *a,int *b,int *c)
{
  printf("enter a number");
  scanf("%d%d%d",a,b,c);
}
void cmp(int a,int b,int c,int *l)
{
  if(a>=b&&a>=c)
  *l=a;
  else
  if(b>=a&&b>=c)
  *l=b;
  else
  if(c>=a&&c>=b)
  *l=c;
}
void output(int largest)
{
  printf("the largest number in the given input is:%d",largest);
}
int main()
{
  int a,b,c,largest;
  input(&a,&b,&c);
  cmp(a,b,c,&largest);
  output(largest);
  return 0;
}