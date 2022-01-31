#include<stdio.h>

void input(int *a,int *b)
{
  printf("enter the first number\n");

  scanf("%d",a);

  printf("enter the second number\n");
  scanf("%d",b);

}

void add(int a,int b,int *sum)
{
  *sum =a+b;

}
void output(int a,int b,int sum)
{
  printf("the sum of %d and %d is%d\n",a,b,sum);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;

}