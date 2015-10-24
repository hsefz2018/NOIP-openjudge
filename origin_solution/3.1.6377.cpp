#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct stu
{
    char name[21];
    int month;
    int day;
    int l;
}stu[200];
int cmp(struct stu x,struct stu y)
{
    x.l=strlen(x.name);
    y.l=strlen(y.name);
    if(x.month==y.month)
    {
        if(x.day==y.day)
        {
            if(x.l==y.l)
                return strcmp(x.name,y.name)<0;
            return x.l<y.l;
        }
        return x.day<y.day;
    }
    return x.month<y.month;
}
int main()
{
    int n,i,j,k,x[13][32],t=0;
    scanf("%d",&n);
    memset(x,0,sizeof(x));
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d",stu[i].name,&stu[i].month,&stu[i].day);
        x[stu[i].month][stu[i].day]++;
    }
    sort(stu,stu+n,cmp);
    for(i=1;i<=12;i++)
    {
        for(j=1;j<=31;j++)
        {
            if(x[i][j]>1)
            {
                t=1;
                printf("%d %d",i,j);
                for(k=0;k<n;k++)
                {
                    if(stu[k].month==i && stu[k].day==j)
                        printf(" %s",stu[k].name);
                }
                printf("\n");
            }
        }
    }
    if(t==0)
        printf("None\n");
    return 0;
}
