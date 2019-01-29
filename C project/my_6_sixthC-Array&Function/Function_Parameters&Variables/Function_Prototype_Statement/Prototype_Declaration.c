#include <stdio.h>

void sum(int begin,int end);                        //statement

int main(int argc, char const *argv[])
{
    sum(10,20);
    sum(20,30);
    sum(35,45);
    /* code */
    return 0;
}

void sum(int begin,int end){                            //definition
    int i;
    int sum = 0;
    for(i=begin;i<=end;i++){
        sum += i;
    }
    printf("the %d and %d's sum is %d\n",begin,end,sum);
}