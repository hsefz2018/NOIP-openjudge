//UNVERIFIED

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double ans = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        double _tmp = 1;
        for(int j = 1; j <= i + 1; j++) {
            _tmp = _tmp * j;
        }
        ans += _tmp;
    }
    cout << setiosflags(ios::fixed) << setprecision(10) << ans << endl;
    return 0;
}
