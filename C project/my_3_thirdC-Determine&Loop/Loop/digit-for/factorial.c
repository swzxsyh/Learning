#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int fact = 1;                       //如果是求和，记录结果的变量应该初始化为0，如果是求乘积，记录结果的变量应该初始化为1

    int i = 1;
    for(i=1;i<=n;i++){
        fact *=i;
    }

/*     int i = n;
    for(;i>1;i--){
        fact *=n;
    } */
//反过来的阶乘，可以省略第一个条件，但需要分号

    printf("%d!=%d\n",n,fact);
    /* code */
    return 0;
}
