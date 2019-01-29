#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int AMOUNT = 100;     //const不能被修改，但是可以被初始化，初始化后无法再修改。可以避免不知所谓magic number，如果后续需要修改，可以更易找到该变量
    int price = 0;

    printf("please input money:");
    scanf("%d",&price);

    int change =  AMOUNT - price;

    printf("pay back $%d \n",change);
    /* code */
    return 0;
}
