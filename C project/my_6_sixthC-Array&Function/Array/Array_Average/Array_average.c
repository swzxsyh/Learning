
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    double sum=0;
    int count=0;
    
    int number[100];

    scanf("%d",&x);

    while(x != -1){
        number[count] = x;

        {
            int i;
            for(i=0;i<=count;i++){
                printf("%d\t",number[i]);
            }
            printf("\n");
        }


        
        sum += x;
        count++;
        scanf("%d", &x);
    }

    if(count>0){
        printf("%f\n",sum/count);
        int i;
        for(i=0;i<count;i++){
            if(number[i]>sum/count){
                printf("%d",number[i]);
            }
        }
    }
    /* code */
    return 0;
}
