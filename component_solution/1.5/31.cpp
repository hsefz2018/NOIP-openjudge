//UNVERIFIED

#include <iostream>
using namespace std;

int main() {
    int n;
    long long _tmp = 1, _ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        _tmp *= (i + 1);
        _ans += _tmp;
    }
    cout << _ans << endl;
    return 0;
}
