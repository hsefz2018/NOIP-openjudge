// Submission #3980940
#include <cstdio>
#include <map>
#include <utility>
static const int PRIME_CNT = 13;
static const int INF = 0x7fffffff;

int primes[PRIME_CNT] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41 };

int m, n;
std::map<int, long long> d;

void dfs(int depth, int val, int last, long long num)
{
    std::map<int, long long>::iterator it = d.find(val);
    if (it == d.end()) d.insert(it, std::make_pair(val, num));
    else if (it->second > num) it->second = num;
    if (depth < PRIME_CNT) {
        int i;
        for (num *= primes[depth], i = 1; num <= n && i <= last; num *= primes[depth], ++i) {
            dfs(depth + 1, val * (i + 1), i, num);
        }
    }
}

int main()
{
    scanf("%d%d", &m, &n);
    dfs(0, 1, INF, 1);

    int top = -1, ans[2000];
    for (std::map<int, long long>::iterator it = d.begin(); it != d.end(); ++it) {
        while (top >= 0 && ans[top] > it->second) --top;
        ans[++top] = it->second;
    }
    int start = 0;
    while (ans[start] < m) ++start;
    if (ans[start] > n) puts("NO");
    else {
        printf("%d", ans[start]);
        for (++start; start <= top; ++start) printf(",%d", ans[start]);
        putchar('\n');
    }
    return 0;
}
