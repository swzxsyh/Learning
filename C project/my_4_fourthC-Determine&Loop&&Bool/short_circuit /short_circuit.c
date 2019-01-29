#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = -1;
    if (a>0 && a++>1){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    printf("%d\n",a);
    /* code */
    return 0;
}
//输出false，a结果为-1，说明当a>0判断false后，不会再做后面的运算
//不要把赋值，或者复合赋值组合进表达式！不建议此代码方式！