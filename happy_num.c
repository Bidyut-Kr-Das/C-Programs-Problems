#include <stdio.h>
#include <math.h>
// happy number is if sum of square of digits of any number turns 1 after certain iteration then
// it is called happy number
// we are taking 10 iterations here
int main()
{
    int num, a;
    printf("enter your number:");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        int sum = 0;
        while (num / 10 != 0)
        {
            a = num % 10;
            sum = sum + pow(a, 2);
            num = num / 10;
        }
        sum=sum+pow(num,2);
        if (sum == 1 || sum == 0)
        {
            printf("i=%d and sum=%d\n",i,sum);//wrote this line for debugging purpose.
            printf("this is a happy number");
            break;
        }
        else if ((i == 9 && sum != 1) || (i == 9 && sum != 0))
        {
            printf("this is not a happy number");
        }
        else
        {
            num = sum;
            printf("i=%d and sum=%d\n",i,sum);//wrote this line for debugging purpose...
        }
    }

    return 0;
}