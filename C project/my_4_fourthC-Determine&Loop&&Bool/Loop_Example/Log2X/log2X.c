#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int ret;
    x = 128;

    printf("x = %d,",x);
    while(x>1){
        x /= 2;
        ret++;
    }

    printf("ret=%d",ret);
    /* code */
    return 0;
}
