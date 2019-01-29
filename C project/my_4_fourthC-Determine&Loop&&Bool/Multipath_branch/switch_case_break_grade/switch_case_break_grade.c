#include <stdio.h>

int main(int argc, char const *argv[])
{
    int grade;
    scanf("%d",&grade);
    grade /=10;

    switch(grade){
        default:
            printf("F\n");
            break;
        case 10:
            printf("A\n");
            break;
        case 9:
            printf("B\n");
            break;
        case 8:
            printf("C\n");
            break;
        case 7:
            printf("D\n");
            break;
        case 6:
            printf("E\n");
            break;
    }
    /* code */
    return 0;
}
