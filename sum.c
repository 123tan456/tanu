#include<stdio.h>


int input(int *a,int *b)
{
printf("enter the numbers");
scanf("%d%d",a,b);
}
int sum(int *a,int *b)
{
 return (*a+*b);
}
void output(int s)
{
printf("sum=%d",s);
}

int main()
{
int a,b,s;
input(&a,&b);
s=sum(&a,&b);
output(s);
}


