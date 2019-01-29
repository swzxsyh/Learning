#include <stdio.h>

int main(int argc, char const *argv[])
{
    float money,price;

    printf("please input bill and price:\n");

    scanf("%f %f",&money,&price);

    if(money-price>=0){
        printf("the change is:%f",money-price); 
    }
    else{
        printf("you need pay more:%f",price-money);
    }
    
    /* code */
    return 0;
}
