#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a;
    scanf("%d",&a);

    float b;
    b=a;

    int all;
    all = 0;
    
    float average;

    while(a>=0){
        all +=a;
        a--;
    }
    average = all/b;
    printf("%f",average);

    /* code */
    return 0;
}
