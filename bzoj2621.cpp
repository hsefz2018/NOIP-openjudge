#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int n,all,ans,w,s[800000],g[800000],f[800000];

int main(){
	scanf("%d%d",&n,&w);
	all = 1 << n;
	for (int i=0; i<n; i++) scanf("%d",&s[1 << i]);
	for (int i=3; i<all; i++) s[i]=s[i & (i-1)]+s[i & (-i)];
	for (int i=1; i<=n; i++){
		memcpy(g,f,sizeof f);
		for (int k=0; k<n; k++)
			for (int j=0; j<all; j++)
				if ((j>>k & 1) && g[j^(1 << k)]>g[j]) g[j]=g[j^(1 << k)];
			for (int j=0; j<all; j++) f[j] = s[j] - g[j] <= w ? s[j]:0;
			if (f[all-1] == s[all-1]){
				ans=i;
				break;
			}
	}
	printf("%d\n", ans);
	return 0;
}
