// Submission #3402646
#include <stdio.h>
#include <string.h>
#define MAX_W 56
#define TRUE  1
#define FALSE 0

int w, h;
int a[MAX_W][MAX_W];

const int floodfill_neighbours[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int floodfill_accessibility[4] = {8, 2, 4, 1};
typedef struct { int row, col; } position;
static position q[MAX_W * MAX_W] = {{ 0 }};
static unsigned char visited[MAX_W][MAX_W] = {{ 0 }};
int floodfill(int row, int col)
{
    int qfront = 1, qrear = 0;
    int dir, nrow, ncol;
    q[0] = (position){row, col};
    visited[row][col] = TRUE;
    while (qfront != qrear) {
        row = q[qrear].row;
        col = q[qrear++].col;
        for (dir = 0; dir < 4; ++dir) if (!(a[row][col] & floodfill_accessibility[dir])) {
            nrow = row + floodfill_neighbours[dir][0];
            ncol = col + floodfill_neighbours[dir][1];
            if (nrow >= 0 && nrow < h && ncol >= 0 && ncol < w && !visited[nrow][ncol]) {
                q[qfront++] = (position){nrow, ncol};
                visited[nrow][ncol] = TRUE;
            }
        }
    }
    return qfront;
}

int main()
{
    scanf("%d%d", &h, &w);
    int i, j;
    for (i = 0; i < h; ++i)
        for (j = 0; j < w; ++j) scanf("%d", &a[i][j]);
    int count = 0, max = 0, cur;
    for (i = 0; i < h; ++i)
        for (j = 0; j < w; ++j) if (!visited[i][j]) {
            ++count;
            cur = floodfill(i, j);
            if (max < cur) max = cur;
        }
    printf("%d\n%d\n", count, max);
    return 0;
}
