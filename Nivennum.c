#include <stdio.h>

int sum_of_digit(int num)
{
    int sum = 0;
    while (num % 10 != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("enter your number:");
    scanf("%d", &num);
    int sum = sum_of_digit(num);
    if (num % sum == 0)
    {
        printf("this is a Niven number");
    }
    else
    {
        printf("this is not a Niven number");
    }
    return 0;
}