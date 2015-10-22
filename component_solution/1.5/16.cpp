//UNVERIFIED
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n;
    double ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        double x, y;
        int count;
        cin >> x >> y >> count;
        ans += sqrt(x * x + y * y) / 50.0 * 2.0 + count * 1.5;
    }
    cout << static_cast<int>(ceil(ans)) << endl;
    return 0;
}
