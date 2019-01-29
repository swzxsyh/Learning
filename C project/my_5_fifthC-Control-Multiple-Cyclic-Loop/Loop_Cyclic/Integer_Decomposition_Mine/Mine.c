#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x,y;
    //scanf("%d",&x);
    x=123450000;
    y=x;

    int sum = 1;
    while(x>9){
        x /=10;
        sum *= 10;
    }

    int digit;

    while(sum>0){
        digit = y/sum;                  
        y -=digit*sum;                    
        sum /=10;                                                              
        printf("%d",digit);   
        if(sum>0){
            printf(" ");
        }              
    }
    printf("\n");
    /* code */
    return 0;
}
