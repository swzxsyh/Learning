#include <stdio.h>

int main()
{
    double foot;                                            //double双精度
    double inch;

    printf("your height feet and inch ");
    scanf("%lf %lf",&foot,&inch);

    printf("height is %f cm,\n",((foot+inch/12)*0.3048));
    /* code */
    return 0;
}
