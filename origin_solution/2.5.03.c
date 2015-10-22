// Submission #3402565
#include <stdio.h>
#include <string.h>
#define MAX_W 24
#define TRUE  1
#define FALSE 0

int w, h;
char a[MAX_W][MAX_W];

const int floodfill_neighbours[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int floodfill(int row, int col)
{
    typedef struct { int row, col; } position;
    static position q[MAX_W * MAX_W];
    static unsigned char visited[MAX_W][MAX_W];
    memset(q, 0, sizeof q);
    memset(visited, FALSE, sizeof visited);

    int qfront = 1, qrear = 0;
    int dir, nrow, ncol;
    q[0] = (position){row, col};
    visited[row][col] = TRUE;
    while (qfront != qrear) {
        row = q[qrear].row;
        col = q[qrear++].col;
        for (dir = 0; dir < 4; ++dir) {
            nrow = row + floodfill_neighbours[dir][0];
            ncol = col + floodfill_neighbours[dir][1];
            if (nrow >= 0 && nrow < h && ncol >= 0 && ncol < w
                && a[nrow][ncol] == '.' && !visited[nrow][ncol])
            {
                q[qfront++] = (position){nrow, ncol};
                visited[nrow][ncol] = TRUE;
            }
        }
    }
    return qfront;
}

int main()
{
    scanf("%d%d", &w, &h);
    while (w && h) {
        getchar();
        int i, j, start_row, start_col;
        for (i = 0; i < h; ++i)
            for (j = 0; j <= w; ++j) {
                a[i][j] = getchar();
                if (a[i][j] == '@') {
                    a[i][j] = '.';
                    start_row = i; start_col = j;
                }
            }
        printf("%d\n", floodfill(start_row, start_col));
        scanf("%d%d", &w, &h);
    }
    return 0;
}
