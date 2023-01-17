#include <stdio.h>
int frequency(int number)
{
    for (int i = 0; i < 10; i++)
    {
        int f = 0, rem, num = number;
        while (num != 0)
        {
            rem = num % 10;
            if (rem == i)
            {
                f++;
            }
            num = num / 10;
        }
        if (f > 1)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    if (frequency(num))
    {
        printf("the number is an unique number");
    }
    else
    {
        printf("the number is not an unique number");
    }
    return 0;
}