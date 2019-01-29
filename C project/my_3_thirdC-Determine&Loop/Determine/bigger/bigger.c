#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;

    printf("input 2 intenger number:\n");
    scanf("%d %d",&a,&b);

    if(a-b>0){
        printf("a is bigger");
    }else if(a-b<0){
        printf("b is bigger");
    }else{
        printf("a equal b");
    }
    /* code */
    return 0;
}
