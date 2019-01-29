#include <stdio.h>

int main()
{
    int n;

    int i = 1;

    scanf("%d",&n);
    
    while(i<n && n>0){
        printf ("%d ",i);
        i +=2;
    }
    printf("%d",n);

    /* code */
    return 0;
}