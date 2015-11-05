// Submission #4025689
#include <cstdio>
#include <set>
#include <utility>
typedef std::pair<int, int> point;
#define x first
#define y second

static const int MAXN = 1008;

int n;
point p[MAXN];

bool work()
{
    point d, q1, q2;
    std::set<point> points;

    scanf("%d", &n);
    if (n == 0) return false;
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &p[i].x, &p[i].y);
        points.insert(p[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) if (i != j) {
            d.x = p[j].x - p[i].x;
            d.y = p[j].y - p[i].y;
            q1.x = p[j].x + d.y;
            q1.y = p[j].y - d.x;
            q2.x = p[i].x + d.y;
            q2.y = p[i].y - d.x;
            if (points.count(q1) && points.count(q2)) ++ans;
            q1.x = p[j].x - d.y;
            q1.y = p[j].y + d.x;
            q2.x = p[i].x - d.y;
            q2.y = p[i].y + d.x;
            if (points.count(q1) && points.count(q2)) ++ans;
        }
    
    printf("%d\n", ans / 8);
    return true;
}

int main()
{
    while (work());
    return 0;
}
