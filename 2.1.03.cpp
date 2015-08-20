#include<iostream>

using namespace std;

long a,b;
long n;

int main(){
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> a >> b;
		long ans=0; 
		while(a>0) {
			a-=b;
			a*=2;
			b*=1.05;
			if (a>1000000) a=1000000;
			ans+=1;
		}
		cout << ans << endl;
	}
	return 0;
}
