//UNVERIFIED

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double ans = 0;
    int n;
    int _flag = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        ans += 1.0 / static_cast<double>(_flag * n);
    }
    cout << setiosflags(ios::fixed) << setprecision(4) << ans << endl;
    return 0;
}
