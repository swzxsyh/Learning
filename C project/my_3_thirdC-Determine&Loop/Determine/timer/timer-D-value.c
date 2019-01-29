#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hour1,hour2;
    int minute1,minute2;


    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    
    int hour_Dvalue=hour2 - hour1;
    int minute_Dvalue=minute2 - minute1;

    if(minute_Dvalue<0){
        minute_Dvalue = 60 + minute_Dvalue;
        hour_Dvalue --;
    }

    printf("the D-value is :%d\n %d\n",hour_Dvalue,minute_Dvalue);

    /* code */
    return 0;
}