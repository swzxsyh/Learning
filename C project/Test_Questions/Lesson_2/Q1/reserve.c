#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0;

    int FirstNum,SecondNum,ThirdNum;

   // printf("input a number:");
    scanf("%d",&a);

    FirstNum = a%10*100;
    SecondNum = a%100/10*10;
    ThirdNum = a/100;

    printf("%d",FirstNum+SecondNum+ThirdNum);

    /* code */
    return 0;
}