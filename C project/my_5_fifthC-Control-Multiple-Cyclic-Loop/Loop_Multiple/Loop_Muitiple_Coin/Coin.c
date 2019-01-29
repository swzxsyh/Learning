#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    scanf("%d",&x);
    int exit=0;

    int coin_one,coin_two,coin_five;


    for(coin_one=1;coin_one<x*10;coin_one++){
        for(coin_two=1;coin_two<x*10/2;coin_two++){
            for(coin_five=1;coin_five<x*10/5;coin_five++){
                if(coin_one+coin_two*2+coin_five*5 == x*10){
                    printf("coin_one %d,coin_two %d,coin_five %d\n",coin_one,coin_two,coin_five);
                    exit =1;
                    break;
                }
            }
            if(exit)break;
        }
        if(exit)break;
    }
    
    /* code */
    return 0;
}
