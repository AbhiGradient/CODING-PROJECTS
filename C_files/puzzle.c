#include <stdio.h>

int isSolved(int p[3][3]) {
    int correct = 1, val = 1;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) {
            if(i==2 && j==2) break;
            if(p[i][j] != val++) return 0;
        }
    return 1;
}

int main() {
    int p[3][3];

    printf("Enter 3x3 puzzle (use 0 for blank):\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&p[i][j]);

    if(isSolved(p))
        printf("Puzzle is solved.\n");
    else
        printf("Puzzle is not solved.\n");

    return 0;
}