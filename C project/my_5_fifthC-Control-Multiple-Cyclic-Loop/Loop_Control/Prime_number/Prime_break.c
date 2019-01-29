#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    scanf("%d",&input);

    int i;
    int prime=1;

    for(i=2;i<input;i++){
        if(input%i == 0){
            prime =0;
            break;
        }
    }
        if(prime==1){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    
    /* code */
    return 0;
}
