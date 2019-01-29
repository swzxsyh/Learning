#include <stdio.h>

int main(int argc, char const *argv[])


{
    int i=0;
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int x=2;

    for(i=0;i<(sizeof(a)/sizeof(a[0]));i++){
        if(a[i]==x){
            printf("yes");
            break;
            }
        }
    


}
