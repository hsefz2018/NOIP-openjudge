// Submission #4020067
// For test data:
//    http://www.icpc-midcentral.us/archives/2002/browse.html
//    http://www.icpc-midcentral.us/archives/2002/jungle/io.html
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAXN 1024
#define MAXM 2048
#define SWAP(__t, __a, __b) do { __t = __a; __a = __b; __b = __t; } while (0)

int n, m;
int from[MAXM], to[MAXM], weight[MAXM];

int ds_parent[MAXN];
void ds_init(int n)
{
    do ds_parent[--n] = n; while (n);
}
int ds_root(int u)
{
    if (ds_parent[u] == u) return u;
    else return (ds_parent[u] = ds_root(ds_parent[u]));
}
void ds_union(int u, int v)
{
    static int s, t;
    if ((s = ds_root(u)) != (t = ds_root(v)))
        if (rand() & 1) ds_parent[s] = t;
        else ds_parent[t] = s;
}

// http://noi.openjudge.cn/topic/13205/
char next_notblank()
{
    static char ch;
    while ((ch = getchar()) == ' ' || ch == '\n');
    return ch;
}

unsigned char work()
{
    scanf("%d", &n);
    if (n == 0) return 0;

    m = 0;
    int i, j, k;
    for (i = 0; i < n - 1; ++i) {
        assert(next_notblank() == 'A' + i);
        scanf("%d", &k);
        while (k--) {
            from[m] = i;
            to[m] = next_notblank() - 'A';
            scanf("%d", &weight[m++]);
        }
    }

    // Kruskal's algorithm
    int mst_w = 0;
    for (i = 0; i < m - 1; ++i)
        for (j = i + 1; j < m; ++j) if (weight[i] > weight[j]) {
            SWAP(k, from[i], from[j]);
            SWAP(k, to[i], to[j]);
            SWAP(k, weight[i], weight[j]);
        }
    ds_init(n);
    for (i = 0; i < m; ++i)
        if (ds_root(from[i]) != ds_root(to[i])) {
            mst_w += weight[i];
            ds_union(from[i], to[i]);
        }
    printf("%d\n", mst_w);
    return 1;
}

int main()
{
    while (work());
    return 0;
}
