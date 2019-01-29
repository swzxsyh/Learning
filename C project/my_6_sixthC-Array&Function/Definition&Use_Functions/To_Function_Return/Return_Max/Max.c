#include <stdio.h>

int max(int a,int b)
{
    int ret;
    if(a>b){
        ret=a;
        printf("max is %d\n",ret);
    } 
    else{
        ret=b;
        printf("max is %d\n",ret);
    }
    return ret;
    /* code */
}

int main(int argc, char const *argv[])
{
    int a,b,c;
    a=5;
    b=6;
    c=max(10,12);
    printf("c is %d\n",c);    
    c=max(a,b);
    printf("c is %d\n",c);    
    c=max(c,23);
    printf("c is %d\n",c);    

    
    printf("max is %d\n",max(a,b));
    /* code */
    return 0;
}

