#include <iostream>
using namespace std;

long long f[233333];

int main() {
    int n;
    cin >> n;
    f[1] = f[2] = 1;
    for(int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n] << endl;
    return 0;
}
