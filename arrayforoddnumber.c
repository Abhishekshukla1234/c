#include<stdio.h>
int countodd(int arr[],int n);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[]={n};
    return 0;
}
int countodd(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    return count;
}