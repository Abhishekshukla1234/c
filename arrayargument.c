#include<stdio.h>
void printnumbers(int arr[],int n);
int main(){
    int n,i;
    int arr[9]={1,2,3,4,5,6,7,8,9};
    printnumbers(arr,9);
}
void printnumbers(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}