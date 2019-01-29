#include <stdio.h>

int main(int argc, char const *argv[])
{
    int type;
    scanf("%d",&type);

    switch(type){
        case 1:
            printf("hello\n");
            break;
        case 2:
            printf("morning\n");
            break;
        case 3:
            printf("night\n");
            break;
        case 4:
            printf("bye\n");
            break;
        default:
            printf("wrong\n");
            break;
    }
    /* code */
    return 0;
}
