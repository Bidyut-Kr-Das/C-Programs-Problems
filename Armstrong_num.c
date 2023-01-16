#include <stdio.h>
#include <math.h>
int find_digit(int num){
    int count=0;
    while(num%10!=0){
        count++;
        num=num/10;
    }
    return count;
}
int main()
{
    int num,number, count,a,sum=0;
    printf("enter your number:");
    scanf("%d",&num);
    number=num;
    count=find_digit(num);
    printf("%d\n",count);
    while(num%10!=0){
        a=num%10;
        num=num/10;
        sum=sum+pow(a,count);
    }
    
    printf("%d\n",sum);
    if(number==sum){
        printf("the number is an armstrong number");
    }
    else{
        printf("it's not an armstrong number");
    }
    return 0;
}
