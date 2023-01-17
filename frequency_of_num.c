#include <stdio.h>
void frequency(int number, int freq)
{
    int rem, f = 0, num = number;
    while (num != 0)
    {
        rem = num % 10;
        if (rem == freq)
        {
            f++;
        }
        num = num / 10;
    }
    printf("the digit %d in the number %d is present %d times", freq, number, f);
}
int main()
{
    int num, freq;
    printf("Enter your number:");
    scanf("%d", &num);
    printf("Of which digit you want to know the frequency:");
    scanf("%d", &freq);
    frequency(num, freq);
    return 0;
}