//A program to read a string store it in a an array and count the number of vowels,consonants and spaces
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[500],cv=0,csp=0,con=0,num=0,v[]={'a','A','e','E','i','I','o','O','u','U'};
    int i=0,j=0;
    printf("Enter the string  ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
         if(str[i]==' ')
            {
                csp++;
            }
         else if(isdigit(str[i]))
        {
            num++;
        }
        else
        {
            for(j=0;j<10;j++)
            {
                if(str[i]==v[j])
                {
                    cv++;
                    break;
                }
                else 
                {
                    con++;
                    break;
                }
            }
           
        }    
        
    }
    printf("------------------------------------------\n");
    printf("Total vowels = %d\nTotal consonents = %d\nTotal spaces = %d\nTotal numbers = %d",cv,con,csp,num);
    printf("------------------------------------------\n");
}    
    