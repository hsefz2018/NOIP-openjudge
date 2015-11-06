// Submission #4006958
#include <stdio.h>
#define MIN(__a, __b) ((__a) < (__b) ? (__a) : (__b))
#define MAX(__a, __b) ((__a) > (__b) ? (__a) : (__b))
#define MAXVOL 108
#define INF 0x7fffffff

int r[MAXVOL][MAXVOL] = {{ 0 }};
#define MARK_VISITED -222
int a, b, c;
int solve(int ax, int bx)
{
    if (r[ax][bx] == MARK_VISITED) return INF - 100000;
    else if (r[ax][bx] > 0) return r[ax][bx];
    if (ax == c || bx == c) return 0;
    r[ax][bx] = MARK_VISITED;
    int ret = INF, t, s;
    if ((t = solve(a, bx) + 1) < ret) ret = t;
    if ((t = solve(ax, b) + 1) < ret) ret = t;
    if ((t = solve(0, bx) + 1) < ret) ret = t;
    if ((t = solve(ax, 0) + 1) < ret) ret = t;
    s = MIN(ax + bx, a);
    if ((t = solve(s, ax + bx - s) + 1) < ret) ret = t;
    s = MIN(ax + bx, b);
    if ((t = solve(ax + bx - s, s) + 1) < ret) ret = t;
    return (r[ax][bx] = ret);
}
int seq[MAXVOL * MAXVOL];
#define FILL_1   1
#define FILL_2   2
#define DROP_1   3
#define DROP_2   4
#define POUR_1_2 5
#define POUR_2_1 6
static const char *op[] = {
    NULL,
    "FILL(1)", "FILL(2)", "DROP(1)", "DROP(2)", "POUR(1,2)", "POUR(2,1)"
};
void getseq()
{
    int ax = 0, bx = 0, s, t;
    int i = 0;
    while (ax != c && bx != c) {
        if (r[a][bx] + 1 == r[ax][bx]) seq[i] = FILL_1, ax = a;
        else if (r[ax][b] + 1 == r[ax][bx]) seq[i] = FILL_2, bx = b;
        else if (r[0][bx] + 1 == r[ax][bx]) seq[i] = DROP_1, ax = 0;
        else if (r[ax][0] + 1 == r[ax][bx]) seq[i] = DROP_2, bx = 0;
        else if (s = MIN(ax + bx, a), r[s][ax + bx - s] + 1 == r[ax][bx])
            seq[i] = POUR_2_1, t = ax, ax = s, bx = t + bx - s;
        else if (s = MIN(ax + bx, b), r[ax + bx - s][s] + 1 == r[ax][bx])
            seq[i] = POUR_1_2, t = bx, bx = s, ax = ax + t - s;
        else puts("INVALID!!");  // Should never get here
        ++i;
    }
}

int main()
{
    int i, ans;
    scanf("%d%d%d", &a, &b, &c);
    ans = solve(0, 0);
    if (ans > MAXVOL * MAXVOL) {
        puts("impossible");
    } else {
        printf("%d\n", ans);
        getseq();
        for (i = 0; i < ans; ++i) puts(op[seq[i]]);
    }
    return 0;
}
