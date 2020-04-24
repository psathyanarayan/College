//A program to find the trace and norm of a matrix
#include<stdio.h>
void main()
{
    int ar[50][50],i,n,j,trace,norm[50],max=0,c_sum=0;
    printf("Enter the size of 1st array a (less than 30) ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             printf("Value.%d%d- ",i,j);
             scanf("%d",&ar[i][j]);
             if(i==j)
             {
                 trace+=ar[i][j];
             } 
        }
    }
    //Displaying the matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
             printf("%d  ",ar[i][j]);
            
        }
        printf("\n");
    }         
    printf("Trace of the given matrix is %d",trace);
    //Displaying norm
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             c_sum+=ar[j][i];            
        }
    norm[i]=c_sum;
    c_sum=0;    
    printf("\nA%d= %d",i+1,norm[i]);    
    printf("\n");
    }
    //Checking the maximum
    for(i=0;i<n;i++)
    {
        if(norm[i]>max)
        {
            max=norm[i];
        }
    }
    //Displaying the value of norm
    printf("Norm =%d",max);     
}    