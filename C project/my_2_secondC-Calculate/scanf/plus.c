#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;
    
    printf("print 2 numbers");
    scanf("%d %d",&a, &b);

    printf("plus number is %d + %d=%d\n",a,b,a+b);      //3个%对应着后面的a,b,a+b
    /* code */
    return 0;
}
