// Submission #3463146
#include <cstdio>
#include <algorithm>
#include <utility>
static const int MAXN = 131072;

namespace fenwick {

int n;

int f[MAXN] = { 0 };
#define lowbit(__x) ((__x) & -(__x))
void add(int idx, int inc)
{
    while (idx <= n) {
        f[idx] += inc;
        idx += lowbit(idx);
    }
}
// [1, end]
int prefixsum(int end)
{
    int ans = 0;
    while (end) {
        ans += f[end];
        end -= lowbit(end);
    }
    return ans;
}
// [start, end]
int sum(int start, int end)
{
    return prefixsum(end) - prefixsum(start - 1);
}
int at(int idx)
{
    return sum(idx, idx);
}
#undef lowbit

}

namespace discretizer {

template<typename T> int *sort(int n, T *a)
{
    std::pair<T, int> list[MAXN];
    for (int i = 0; i < n; ++i) list[i] = std::make_pair(a[i], i);
    std::sort(list, list + n);
    int *ret = new int[n];
    for (int i = 0; i < n; ++i) ret[list[i].second] = i + 1;
    return ret;
}

}

int main()
{
    int n, a[MAXN];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    int *b = discretizer::sort(n, a);

    fenwick::n = n;
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        fenwick::add(b[i], 1);
        ans += fenwick::sum(b[i] + 1, n);
    }
    printf("%lld\n", ans);
    return 0;
}
