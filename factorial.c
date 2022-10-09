#include<stdio.h>
int fun1(int n);
int main()
{
   int n;
   printf("Enter the num:");
   scanf("%d",&n);
   printf("Factorial is %d",fun1(n));
   
   return 0;
}
int fun1(int n)
{
    int fact;

    if (n==1)
    {
        return 1;
    }
    else
    {
        fact=n*fun1(n-1);
    }
    
    return fact;
}