#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int input_num;
    int count_odd;
    int count_even;

    while(scanf("%d",&input_num)>0 &&(input_num< 0,100000) && input_num != -1){
        if(input_num%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }

    printf("%d ",count_odd);
    printf("%d\n",count_even);

    return 0;
}