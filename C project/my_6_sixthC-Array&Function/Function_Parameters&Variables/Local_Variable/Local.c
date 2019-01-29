#include <stdio.h>

void swap(int a,int b);

int main(){
    int a=5;
    int b=6;
    swap(a,b);
    {
        int a = 0;
        //int a = 5;
        printf("local variable a is %d\n\n",a);
    }

    printf("in the main,the a&b won't change; a=%d,b=%d\n",a,b);
    return 0;
}

void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;

    printf("in the swap,it will do something,but won't change the main function‘s parameter； a=%d,b=%d\n\n",a,b);
}