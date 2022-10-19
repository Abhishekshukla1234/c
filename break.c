#include<stdio.h>
int main()
{ int i;
    for (i=0; i<=10; i++)
    {
        if(i==7)
        {
            break;
        }
        printf("%d\n",i);
    }
    printf("end");
    return 0;
}