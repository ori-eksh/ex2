#include "my_mat.h"
#define matSize 10
#define Infimum 99999999

int matrix [matSize][matSize];
int pathes [matSize][matSize];


//function A
int matInput() {
    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < matSize; j++) {
            int x;
            scanf("%d", &x);
            matrix[i][j] = x;
            if((x == 0) && (i != j )) {
                matrix[i][j] = Infimum;
            }
        }
    }
    AlgoShortPath(matrix);
    return 0;
}

//Function B
int isPath(int u, int v) {

    if (pathes[u][v]<= 0||pathes[u][v]==99999999)
    { printf("\nFalse");}
    else
    {  printf("\nTrue");}
return 1;
}

//function C
int shortestPath(int u, int v) {
    if (pathes[u][v] <= 0||pathes[u][v]==99999999)
    {return -1;}
    return pathes[u][v];
}

int min(int a, int b) {
    if (a < b)
        return (a);
    else
        return (b);
}

void AlgoShortPath(int matrix [][matSize])
{
        int i, j, k;

        for (i = 0; i < matSize; i++) {
            for (j = 0; j < matSize; j++) {
                pathes[i][j] = matrix[i][j];
            }
        }

        // Adding vertices individually
        for (k = 0; k < matSize; k++) {
            for (i = 0; i < matSize; i++) {
                for (j = 0; j < matSize; j++) {
                    if (pathes[i][k] + pathes[k][j] < pathes[i][j])
                    { pathes[i][j] = pathes[i][k] + pathes[k][j];}
                }
            }
        }
    return;
    }

