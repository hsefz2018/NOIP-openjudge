#include <iostream>
using namespace std;

int a[21];

int main() {
    int n;
    cin >> n;
    a[0] = a[1] = 1;
    for(int i = 2; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n] << endl;
    return 0;
}
