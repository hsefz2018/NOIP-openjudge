// Submission #4016621
#include <stdio.h>
#define MAXN 2015
#define MAXH 2048
#define FIO_BUFSIZE 23333
char fio_buf[FIO_BUFSIZE];
int fio_bufptr = FIO_BUFSIZE - 1;
void fio_refill()
{
    fread(fio_buf, FIO_BUFSIZE, 1, stdin);
    fio_bufptr = 0;
}
char fio_getchar()
{
    if (++fio_bufptr == FIO_BUFSIZE) fio_refill();
    return fio_buf[fio_bufptr];
}
int fio_getint()
{
    static int ret;
    static char ch;
    while ((ch = fio_getchar()) < '0' || ch > '9');
    ret = ch - '0';
    while ((ch = fio_getchar()) >= '0' && ch <= '9')
        ret = ret * 10 + ch - '0';
    return ret;
}

int n, h, delta;
int kaki[MAXN][MAXH] = {{ 0 }};
int f[MAXN][MAXH] = {{ 0 }};
int hh[MAXN] = { 0 };

int main()
{
    n = fio_getint();
    h = fio_getint();
    delta = fio_getint();
    int i, j, t;
    for (i = 0; i < n; ++i) {
        j = fio_getint();
        do ++kaki[i][fio_getint()]; while (--j);
    }

    for (i = 0; i < n; ++i)
        if (hh[0] < (f[i][0] = kaki[i][0])) hh[0] = f[i][0];
    for (j = 1; j <= h; ++j)
        for (i = 0; i < n; ++i) {
            f[i][j] = f[i][j - 1];
            if (j >= delta && f[i][j] < hh[j - delta]) f[i][j] = hh[j - delta];
            if (hh[j] < (f[i][j] += kaki[i][j])) hh[j] = f[i][j];
        }

    int ans = 0;
    for (i = 0; i < n; ++i) if (ans < f[i][h]) ans = f[i][h];
    printf("%d\n", ans);
    return 0;
}
