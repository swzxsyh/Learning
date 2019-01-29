#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x=2;
    int count=0;

    //for(x=2;x<100;x++)
    while(count<50){
    int i;
    int prime=1;
        for(i=2;i<x;i++){
            if(x%i == 0){
                prime =0;
                break;
            }
        }
        if(prime==1){
            printf("%d ",x);
            count++;
        }
        x++;
    }
    /* code */
    return 0;
}
