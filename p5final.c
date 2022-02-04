#include<stdio.h>
#include<math.h>

float input()
{
  float x;
  printf("enter the number to find the square root:\n");
  scanf("%f",&x);
  return x;

}
float mysqrt(float x)
{
  float guess = x/2;
  float next = x/guess;
  while(fabs(next -guess)>0.000001)
  {
    guess=(next+guess)/2;
    next=x/guess;
  }
  return guess;
}
void output(float x,float sqrt)
{
  printf("the square root of given number %f is %f\n",x,sqrt);
}
int main()
{
  float x,sqrt;
  x=input();
  sqrt=mysqrt(x);
  output(x,sqrt);
  return 0;
}