//UNVERIFIED

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x; int n;
    cin >> x >> n;
    double ans = 0;
    for(int i = 0; i < n; i++) {
        ans *= x;
        ans += x;
    }
    cout << setiosflags(ios::fixed) << setprecision(2) << ans * x + 1 << endl;
    return 0;
}
