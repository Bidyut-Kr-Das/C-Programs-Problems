#include <stdio.h>
void frequency(int number)
{
    for (int i = 0; i < 10; i++)
    {
        int rem, f = 0, num = number;
        while (num != 0)
        {
            rem = num % 10;
            if (rem == i)
            {
                f++;
            }
            num = num / 10;
        }
        if (f > 0)
        {
            printf("the digit %d is present %d times\n", i, f);
        }
        else
            continue;
    }
}
int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d", &num);
    frequency(num);
    return 0;
}