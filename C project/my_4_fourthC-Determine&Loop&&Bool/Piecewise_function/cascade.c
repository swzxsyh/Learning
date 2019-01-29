#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    scanf("%d",&x);
    int f = 0;

    if(x<0){
        f = -1;
    }
        else{
        if( x == 0 ){
            f=0;
        }
        else{
            f=2*x;
        }
    }
        printf("%d\n",f);
        /* code */
        return 0;
}
