#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hour1,minute1;
    int hour2,minute2;

    printf("please input time1 :");
    scanf("%d %d",&hour1,&minute1);

    printf("please input time2 :");
    scanf("%d %d",&hour2,&minute2);

    int time1All=hour1*60+minute1;
    int time2All=hour2*60+minute2;

    int timevalue=time2All-time1All;

    printf("time D-value is:%d hour %d minute", timevalue/60, timevalue%60);


    /* code */
    return 0;
}
