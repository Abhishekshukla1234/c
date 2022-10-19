#include<stdio.h>
int main()
{
    int n ;
    printf("enter the number:");
    scanf("%d",&n);
    do{
        printf("%d\n",n);
         if(n%2!=0){
     break; 
    }
    } 
    while(1);
    printf("Thank you");
    return 0;
}