#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,t;
    scanf("%d %d",&a,&b);

    while(b!=0){
        t=a%b;
        a=b;
        b=t;
    }
    printf("%d\n",a);
    /* code */
    return 0;
}
