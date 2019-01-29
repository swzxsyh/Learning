#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    for(i=0;i<5;i++){
        printf("i=%d ",i);              //出现在循环里面的最大为4
    }

    printf("\n the last i is %d\n",i);  //跳出循环后最大值则为5

    for(i=1;i<=5;i++){
        printf("i=%d ",i);              //循环次数一样，但是循环内最大值为5
    }

    printf("\n the last i is %d\n",i);  //跳出循环时i最大值为6
    /* code */
    
    return 0;
}
