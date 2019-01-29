#include <stdio.h>

int main(int argc, char const *argv[])
{
    const double RATE = 8.25;
    const int STANDARD = 40;
    double pay =0.0;
    int hours;

    printf("please input your work hour:\n");
    scanf("%d",&hours);
    if(hours>STANDARD)
        pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
    else
        pay = hours * RATE;
    
    printf("your salary is :%f",pay);
    /* code */
    return 0;
}
