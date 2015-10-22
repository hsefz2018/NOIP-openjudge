#include <iostream>
using namespace std;

int main() {
    int _n;
    long long _ans = 1;
    cin >> _n;
    for(int i = 0; i < _n; i++) {
        _ans *= 2;
    }
    cout << _ans << endl;
    return 0;
}
