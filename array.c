//A program to add two arrays
#include<stdio.h>
void main()

{
 int a[100],b[100],i,total[100],size_a,size_b,size;
 label:
 printf("Enter the size of 1st array a (less than 30) ");
 scanf("%d",&size_a);
 for(i=0;i<size_a;i++)
    {
        printf("Value.%d- ",i+1);
        scanf("%d",&a[i]);
        
    }
 printf("\nEnter the size of 2nd array a (less than 30)\n ");
 scanf("%d",&size_b);   
 for(i=0;i<size_b;i++)
    {
        printf("Value.%d- ",i+1);
        scanf("%d",&b[i]);
        
    }
     if(size_a==size_b)
        size=size_a;
    else
    {
        printf("Please re-enter the array size");
        goto label;
    }
 for(i=0;i<size;i++)
 {
    total[i]=a[i]+b[i];
 }

 
 printf("\nThe values of the total array is\n");
 for(i=0;i<size;i++)
 {  
  printf("\nValue.%d- %d ",i+1,total[i]);
 }
}