//A program to find the largest element in row and column
#include<stdio.h>
void main()
{
    int ar[50][50],i,row,j,maxr=0,maxc=0,column,min[10],max[10];
    printf("Enter the size of row elements in the array (less than 50) ");
    scanf("%d",&row);
    printf("Enter the size of column elements in the array (less than 50) ");
    scanf("%d",&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
             printf("Value.%d%d- ",i,j);
             scanf("%d",&ar[i][j]);                              
        }              
    }
    //for-loop to find the minimum values in each row
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(ar[i][j]>maxr)
             {
                 maxr=ar[i][j];
             }
        }
        min[i]=maxr;
    }               
  
    // the minimum in the row 
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(ar[i][j]<min[i])
             {
                 min[i]=ar[i][j];
             }      
             printf("%d  ",ar[i][j]);
            
        }
        printf("The smallest value in Row[%d] is %d",i+1,min[i]);
        printf("\n");
        printf("------------------------------------------\n");
    }
      printf("\n\n");
    
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            if(ar[j][i]>maxc)
             {
                 maxc=ar[j][i];
             }
              printf("%d  ",ar[j][i]);

        }
    printf("Largest elemnet in Column[%d] is %d",i+1,maxc);    
    printf("\n");
    printf("------------------------------------------\n");
    }

   
}            
             



