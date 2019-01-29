#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    int min;
    scanf("%d %d",&a,&b);

    if(a>b){
        min=b;
    }else{
        min=a;
    }

    int i,ret;


    for(i=1;i<=min;i++){
        if(a %i==0){
            if(b%i==0){
                ret=i;
            }
        };
    }

    printf("%d\n",ret);

    /* code */
    return 0;
}
