#include<stdio.h>

int main(int argc, char const *argv[])
{
    const int READY = 24;
    int code = 0;
    int count = 0;

    scanf("%d %d",&code,&count);
    if(count == READY){
        if(count < 20){
            printf("Ready\n");
        }
        else{
            printf("Wait");
        }

    }
    /* code */
    return 0;
}
