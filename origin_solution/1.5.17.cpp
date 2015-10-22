#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	double h,tot;
	int i;
	cin >> h;
	tot=h;
	for (i=0;i<10;i++) {
		h=h/2;
		if (i<=8) tot+=h*2; 
    }
	cout << tot << endl;
	cout << h << endl;
}
