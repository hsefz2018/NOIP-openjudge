#include <iostream>
using namespace std;

int main() {
    int n;
    int ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _tmp;
        cin >> _tmp;
        int _x = _tmp % 10;
        int _y = _tmp % 100 / 10;
        int _z = _tmp % 1000 / 100;
        int _a = _tmp / 1000;
        if(_x > _y + _z + _a) ans++;
    }
    cout << ans << endl;
    return 0;
}
