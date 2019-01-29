#include <stdio.h>

int search(int key,int a[],int length);
int main(void)
{
    int a[]={1,2,3,4,5,6,7,8,16,24,28,32};

    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
        printf("%d\t\n",a[i]);
    }

    int x;
    scanf("%d",&x);
    int loc;
    loc=search(x,a,sizeof(a)/sizeof(a[0]));
    if(loc!=-1){
        printf("the number %d is in the a[%d] \n\n",x,loc);
    }else{
        printf("No\n");
    }
    /* code */
    return 0;
}

int search(int key,int a[],int length)
{
    int ret = -1;
    int i;
    for(i=0;i<=length;i++){
        if(a[i] == key){
            ret = i;
            break;
        }
    }
    return ret;
}
