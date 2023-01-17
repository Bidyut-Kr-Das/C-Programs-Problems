#include <stdio.h>
#include <math.h>
int isNeon(int num)
{
    int rem, sum = 0, sqnum;
    sqnum = pow(num, 2);
    while (sqnum != 0)
    {
        rem = sqnum % 10;
        sum = sum + rem;
        sqnum = sqnum / 10;
    }
    if (sum == num)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num;
    printf("enter your number:");
    scanf("%d", &num);
    if (isNeon(num))
    {
        printf("the number is Neon number");
    }
    else
    {
        printf("the number is not neon number");
    }
    return 0;
}