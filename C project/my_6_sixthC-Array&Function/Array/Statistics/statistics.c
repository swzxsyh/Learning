#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int number = 10;
    int x;
    int count[number];
    int i;

    for(i=0;i<=x;i++){
        count[i]=0;
    }

    scanf("%d",&x);
    while(x!=-1){
        if(x>=0 && (x<=9)){
            count[x]++;
        }
    scanf("%d",&x);        
    }

    for(i=0;i<number;i++){
        printf("%d=%d\n",i,count[i]);
    }

    /* code */
    return 0;
}
