//UNVERIFIED
#include <iostream>

using namespace std;


int main() {
    double ans = 0;
    double h = 0.0;
    cin >> h;
    ans = h;
    for(int i = 1; i < 10; i++) {
        ans += h;
        h /= 2.0;
    }
    cout << ans << endl << h / 2.0 << endl;
    return 0;
}
