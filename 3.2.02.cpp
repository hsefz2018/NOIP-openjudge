// Submission #3388947
#include <cstdio>
#include <list>
// 泥萌看这真的是链表 (๑•̀ㅂ•́)و✧

int main()
{
    int n, a, k;
    std::list<int> l;
    scanf("%d", &n);
    do {
        scanf("%d", &a);
        l.push_back(a);
    } while (--n);
    scanf("%d", &k);
    for (std::list<int>::iterator i = l.begin();
        i != l.end(); ++i)
    {
        if (*i == k) { l.erase(i); --i; }
    }
    for (std::list<int>::iterator i = l.begin();
        i != l.end(); ++i)
    {
        printf("%d ", *i);
    }
    putchar('\n');
    return 0;
}
