#include <stdio.h>

int reverse(int num)
{
    int newnumber = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        newnumber = (newnumber * 10) + rem;
        num = num / 10;
    }
    return newnumber;
}
int checkPalindrome(int num)
{
    int newnum;
    newnum = reverse(num);
    if (newnum == num)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    if (checkPalindrome(num))
    {
        printf("this is a palindrome number");
    }
    else
    {
        printf("this is not a palindrome number");
    }

    return 0;
}