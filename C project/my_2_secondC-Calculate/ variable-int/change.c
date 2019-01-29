#include <stdio.h>
int main(int argc, char const *argv[])
{
    int price=0;

    printf("input price:\n");       
    scanf("%d",&price);             //scanf函数读入整数， & 指针

    int change = 100 - price;       //100现在是magic number，不知道是什么的数字
    printf("change you $%d \n",change);
    /* code */
    return 0;
}
