#include <stdio.h>

int isPrime(int i){
    int ret=1;
    int k;
    for(k=2;k<i-1;i++){
        if(i%k == 0){
            ret =0;
            break;
        }
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    int m,n;
    int sum=0;
    int count=0;
    int i;
    if(m==1)
        m=2;
    for(i=m;i<=n;i++){
        if(isPrime(i)){
            sum +=1;
            count++;
        }
    }
    printf("%d %d",count,sum);

    /* code */
    return 0;
}