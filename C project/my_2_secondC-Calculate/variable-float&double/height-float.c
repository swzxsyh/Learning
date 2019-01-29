#include <stdio.h>

int main()
{
    int foot;
    int inch;

    printf("your height feet and inch ");
    scanf("%d %d",&foot,&inch);

    printf("height is %f cm,\n",((foot+inch/12.0)*0.3048));     //float单精度
    /* code */
    return 0;
}
