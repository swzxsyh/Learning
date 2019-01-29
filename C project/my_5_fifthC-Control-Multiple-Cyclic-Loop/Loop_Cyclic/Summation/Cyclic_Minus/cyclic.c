#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int i;
    double sum=0.0;
    int sign=1;

    for(i=1;i<=n;i++){
        sum +=sign*1.0/i;
        sign=-sign;
    }
    printf("f(%d)=%f\n",n,sum);
    /* code */
    return 0;
}
