#include<cstdio>
#include<cmath>
int main(){
	double a,b,t;
	scanf("%lf%lf",&a,&b);
	t = trunc(a/b);
	printf("%g",a-b*t);
	return 0;
}
