// Submission #3987855
// For tests & original problemset:
//   http://webdocs.cs.ualberta.ca/~acpc/2003/

#include <stdio.h>
#define MAXN 50003

int n;
int ds_parent[MAXN];

void ds_init()
{
    int i;
    for (i = 0; i < n; ++i) ds_parent[i] = i;
}
void ds_union(int u, int v)
{
    int t;
    if ((t = ds_findroot(u)) != ds_findroot(v))
        ds_parent[ds_findroot(u)] = v;
}
int ds_findroot(int u)
{
    if (u == ds_parent[u]) return u;
    else return (ds_parent[u] = ds_findroot(ds_parent[u]));
}

int work()
{
    int m, u, v;
    scanf("%d%d", &n, &m);
    if (n == 0 && m == 0) return -1;
    ds_init();
    while (m--) {
        scanf("%d%d", &u, &v);
        --u; --v;
        ds_union(u, v);
    }

    unsigned char is_root[MAXN] = { 0 };
    for (m = 0; m < n; ++m) is_root[ds_findroot(m)] = 1;
    u = 0;
    for (m = 0; m < n; ++m) u += is_root[m];
    return u;
}

int main()
{
    int t = 0, ans;
    while ((ans = work()) != -1)
        printf("Case %d: %d\n", ++t, ans);
    return 0;
}
