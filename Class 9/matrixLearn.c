#include <stdio.h>

int main()
{
    /*
        int mat[row no.][col. no.]

    */

    int row = 4, col = 4;

    int mat[row][col];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }



    return 0;
}

