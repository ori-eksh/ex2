#include "my_mat.h"

int main() {

    while (1) {
        char input;
        scanf("%c", &input);
        if (input == 'A') {
            matInput();
        }

        if (input == 'B') {
            int u, v;
            scanf("%d", &u);
            scanf("%d", &v);
            isPath(u,v);
        }

        if (input == 'C') {
            int u, v;
            scanf("%d", &u);
            scanf("%d", &v);

            int y = shortestPath(u,v);
            printf("\n%d", y);
        }

        if(input == 'D') {
            exit(0);
        }

    }
    return 0;
}
