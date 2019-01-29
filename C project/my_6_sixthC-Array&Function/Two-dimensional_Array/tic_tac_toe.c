#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int size =3;
    int board[size][size];
    int i,j;
    int num0fx;
    int num0f0;
    int result = -1;
    
    for(i=0;i<=size;i++){
        for(j=0;j<=size;j++){
            scanf("%d",&board[i][j]);
        }
    }

    for(i=0;i<size && result == -1;i++){
        num0f0 = num0fx = 0;
        for(j=0;j<size;j++){
            if(board[i][j]==1){
                num0f0++;
            }else{
                num0fx++;
            }
        }
        if (num0f0 == size){
            result = 0;
        }else{
            result = 1;
        }
    }

    if(result == -1){
        for(j=0;j<size && result == -1;j++){
        num0f0 = num0fx = 0;
        for(i=0;i<size;i++){
            if(board[i][j]==1){
                num0fx++;
            }else{
                num0f0++;
            }
        }
        if (num0f0 == size){
            result = 0;
        }else{
            result = 1;
        }
    }
    }
    /* code */
    return 0;
}
