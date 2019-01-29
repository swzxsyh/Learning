#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));
    int a = rand()%100+1;

    int b;

    int count = 0;

    do{
        printf("input a number");
        scanf("%d",&b);

        count++;
        if(b>a){
            printf("bigger,reput");
            count++;
        }
        else if(b<a){
            printf("smaller,reput");
            count++;
        }
    }while(a != b);
/*
    while(a != b){
        if(b>a){
            printf("bigger,reput");
            count++;
        }
        else{
            printf("smaller,reput");
            count++;
        }
    }
*/
    printf("number is %d ,time is %d",a,count);
    /* code */
    return 0;
}
