#include<stdio.h>
int main()
{
    int num,f_dig,l_dig,swap_num,temp,place=1;
    printf("\t\tSwap first and last digit of a number\n");
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    l_dig=temp%10;
    do
        {
            f_dig=temp%10;
            place*=10;
            temp=temp/10;
        }
    while(temp>0);
    place=place/10;
    printf("%d,%d,%d",f_dig,l_dig,place);
    swap_num=num-(f_dig*place)-(l_dig)+(l_dig*place)+f_dig;
    printf("Number after swapping is: %d",swap_num);
    return 0;
}
