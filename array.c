#include<stdio.h>
int main()
{
    float price[3];
    printf("emter the price1:");
    scanf("%f",&price[0]);
    printf("emter the price2:");
    scanf("%f",&price[1]);
    printf("emter the price3:");
    scanf("%f",&price[2]);
    printf("total price1:%f\n",price[0]+(0.18*price[0]));
    printf("total price2:%f\n",price[1]+(0.18*price[1]));
    printf("total price3:%f\n",price[2]+(0.18*price[2]));
    return 0;
    }''