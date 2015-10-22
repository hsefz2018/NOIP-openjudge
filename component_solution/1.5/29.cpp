//UNVERIFIED

#include <iostream>
#include <iomanip>
using namespace std;

int q[32], p[32];

int main() {
    double ans = 0;
    p[1] = 1; q[1] = 2;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        ans += static_cast<double>(q[i]) / static_cast<double>(p[i]);
        q[i + 1] = q[i] + p[i];
        p[i + 1] = q[i];
    }
    cout << setiosflags(ios::fixed) << setprecision(4) << ans << endl;
    return 0;
}
