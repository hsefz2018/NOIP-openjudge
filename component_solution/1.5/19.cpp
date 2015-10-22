#include <iostream>
using namespace std;

int main() {
    int a[12];
    for(int i = 0; i < 12; i++) {
        cin >> a[i];
    }
    int ans = 0, saved = 0;
    for(int i = 0; i < 12; i++) {
        ans += 300;
        ans -= a[i];
        if(ans < 0) {
            cout << -i - 1 << endl;
            return 0;
        }
        saved += ans / 100;
        ans %= 100;
    }
    cout << saved * 100 * 1.2 + ans << endl;
    return 0;
}
