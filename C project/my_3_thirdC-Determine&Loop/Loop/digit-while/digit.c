#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int n=0;

    scanf("%d",&x);
    
    n++;                        //判断0是否占位需要n++
    x /= 10;
    while(x>0){
        n++;
        x /= 10;
    }

    printf("%d\n",n);
    /* code */
    return 0;
}
