//A program to find the row and column sum 
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char name[100][100],ch;
    int nop,mon[50],item[50][50],j,i,money[50],prd;
    printf("Enter the number of sales persons --> ");
    scanf("%d",&nop);
    printf("Enter how many products are there (!!!Should be less than number of persons!!!)--> ");
    scanf("%d",&prd);
    printf("------------------------------------------\n");
    for(i=0;i<nop;i++)
    {
        printf("Enter the name of the %d sales person --> ",i+1);
        scanf("%s",name[i]);
    }
    printf("------------------------------------------\n");
    for(i=0;i<prd;i++)
    {
        printf("Enter the  product%d --> ",i+1);
        scanf("%s",item[i]);
    }
    printf("------------------------------------------\n");
    printf("!!!Displaying the results!!!");
    for(i=0;i<nop;i++)
    {
        printf("\n salesperson %d - %s ",i+1,name[i]);       
    }
    for(i=0;i<prd;i++)
    {
        printf("\n product %d - %s",i+1,item[i]);    
    }
    printf("\n------------------------------------------\n");
    printf("Enter which salesman connected with which products");
    if(nop>=prd)
    {
        for(i=0;i<nop;i++)
        {
                do
                {
                    printf("\nEnter the products of sales person %d --> ",i+1);
                    scanf("%s",&item[j]);
                    printf("Enter the sales money of sales person --> ",i+1);
                    scanf("%d",&mon[j]);
                    printf("\nDo you want to conform changes (y/n)");
                    scanf("  %c",&ch);
                }while(ch == 'N'||ch == 'n');
                j++;
        }    
    }
    else
    {
        printf("\n!!!! WARNING !!!! Make sure no of products is greater than no of sales persons");
    }
    //Displaying
    printf("\n        ----------------------------------------------");
    printf("\n\t\tThe sales and product report\n");
    printf("        ----------------------------------------------\n");
    if(nop>=prd)
    {
        printf("\tSales person \tProduct \tMoney\n");
        for(i=0;i<nop;i++)
        {
            
                printf("\n            %s\t\t%s\t\t%d\n",name[i],item[i],mon[i]);
            
        }
    }
    else
    {
        printf("\n!!!! WARNING !!!! ---> Make sure no of persons is greater than no of products");
    }
    printf("\n        ----------------------------------------------\n");

}    
    
        
       