//A program to implement linear search
#include<stdio.h>
void main()
{
    int var,ar[50],n,i,flag=0,ch;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        printf("Value.%d- ",i);
        scanf(" %d",&ar[i]);      
    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",ar[i]);
    }
    printf("Enter the element to be searched for\n");
    scanf("%d",&var);
        printf("\t\tSearch Menu\n");
        printf("------------------------------------------\n");
        printf("1.Linear Search\n");
        printf("2.Binary Search\n");
        printf("Enter the choice (1/2)");
        scanf("%d",&ch);
        if(ch==1)
        {
            linear(ar,var,n);
        }
        else
        {
            Binary(ar,var,n);
        }
}
void linear(int *str, int *num , int val)
{
    int i,flag=0;

     for(i=0;i<val;i++)
    {
        if(str[i]==num)
        {
            printf("The element %d is found at position %d",num,i+1);
            flag=1;
        }
              
    }
    if (flag==0)
    {
        printf("No such element exists");
    }
    
}

void Binary(int *str, int *num , int val)
{
    int i,mid,j;
    i=val;
    if(i%2==0)
        {
            mid = i/2;
        }
        else
        {
            mid = i/2 +1;
        }
        j=0;
    while(j<val)
    {
        if(mid<=j)
        {
            if(str[j]==num)
            {
                printf("Element found at %d",j+1);
                j++;
                break;
            }
            j++;
        }        

        else if(mid>j)
        {
          if(str[j]==num)
            {
                printf("Element found at %d",j+1);
                j++;
                break;
            }
            j++;
        }
        else
            {
                printf("No such element exists");
            }  
    }
}