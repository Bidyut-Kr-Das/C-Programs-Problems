#include <stdio.h>
int isMagic(int num)
{
    int sum = 0;
    if (num < 10 && num == 1)
    {
        return 1;
    }
    else if (num < 10 && num != 1)
    {
        return 0;
    }
    else
    {
        while (num != 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }
        isMagic(sum);
    }
}
int main()
{
    int num, result;
    printf("enter the number:");
    scanf("%d", &num);
    if (isMagic(num))
    {
        printf("this is a magic number");
    }
    else
    {
        printf("this is not a magic number");
    }
    return 0;
}