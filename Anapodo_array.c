#include <stdio.h>
#include <stdlib.h>

/*merikes fores vgazei tis adress arnitikes kai se anapodi seira*/

int main()
{
    int A[4][4]={{2,4,9,5},
                 {3,5,4,1},
                 {2,5,7,4},
                 {2,5,8,9}};
    int i, j;

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            printf("%d ", &A[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}