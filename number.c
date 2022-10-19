#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
   { if(a>=0)
    {
        printf("positive\n");
    } 
     else
    {
        printf("negative\n");
    }
   }
        if(a%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    
    printf("Thanks you\n");
    return 0;
}