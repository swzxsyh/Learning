#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    //scanf("%d",&x);
    x=123450000;
    int y=x;

    int mask=1;

    while(y>9){
        y /=10;
        mask *= 10;
    }

    do{
        int d = x / mask;
        printf("%d",d);
        if(mask>9){
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    }while(mask>0);

    printf("\n");






    /*int x,y;
    scanf("%d",&x);
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
        printf("%d ",digit);                 
    }*/
    //ERROR with end number:0
    /* code */
    return 0;
}
