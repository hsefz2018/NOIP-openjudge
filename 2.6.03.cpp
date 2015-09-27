#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<queue>
#include<cstring>
#define PAU putchar(' ')
#define ENT putchar('\n')
using namespace std;
const int maxn=20+5;
bool match(char*s,char*t){
    if(t==NULL||s==NULL)return false;
    int n1=strlen(t),n2=strlen(s),mark=0,p1=0,p2=0;
    while(p1<n1&&p2<n2){
        if(s[p2]=='?'){p1++;p2++;continue;}
        if(s[p2]=='*'){p2++;mark=p2;continue;}
        if(t[p1]!=s[p2]){
            if(p1==0&&p2==0)return false;
            p1-=p2-mark-1;p2=mark;continue;
        }p1++;p2++;
    }
    if(p2==n2){
        if(p1==n1)return true;
        if(s[p2-1]=='*')return true;
    }
    for(;p2<n2;p2++)if(s[p2]!='*')return false;
    return true;
}
inline int read(){
    int x=0,sig=1;char ch=getchar();
    for(;!isdigit(ch);ch=getchar())if(ch=='-')sig=0;
    for(;isdigit(ch);ch=getchar())x=10*x+ch-'0';
    return sig?x:-x;
}
inline void write(int x){
    if(x==0){putchar('0');return;}if(x<0)putchar('-'),x=-x;
    int len=0,buf[15];while(x)buf[len++]=x%10,x/=10;
    for(int i=len-1;i>=0;i--)putchar(buf[i]+'0');return;
}
char s[maxn],t[maxn];
void init(){
    cin.getline(s,21);
    cin.getline(t,21);
    if(match(s,t))puts("matched");
    else puts("not matched");
    return;
}
void work(){
    return;
}
void print(){
    return;
}
int main(){init();work();print();return 0;}