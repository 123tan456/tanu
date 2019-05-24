#include<stdio.h>
int input(int a[],int *n)
{
printf("Enter the size of the array A\n");
scanf("%d",n);
printf("enter the array elements\n");
 for(int i=0;i<*n;i++)
 {
  scanf("%d",&a[i]);
 }
}
int add(int a[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
 sum=sum+a[i];
}
return sum;
}
int output(int sum)
{
printf("the sum of the array elements is %d",sum);
}
 int main()
{
int a[],n,sum;
input(a,&n);
sum=add(a,n);
output(sum);
}

