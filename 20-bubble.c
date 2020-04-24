//A program to implement bubble sort
#include<stdio.h>
void main()
{
    int ar[50],i,n,j,temp;
    printf("Enter the size of 1st array a (less than 30) ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value.%d- ",i+1);
        scanf("%d",&ar[i]);        
    }
    for ( i = 0; i < n-1; i++)                          //for loop to implement bubble sort
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if(ar[i]>ar[i+1])
            {
                temp = ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=temp;


            }
        }
        
    }
    for(i=0;i<n;i++)
 {  
    printf("\nValue.%d- %d ",i+1,ar[i]);
 }
    


}