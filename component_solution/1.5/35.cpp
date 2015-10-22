//UNVERIFIED

#include <iostream>
using namespace std;

int getone(int n) {
    int ans = 0;
    while(n > 0) {
        ans += (n % 10 == 1) ? 1 : 0;
        ans /= 10;
    }
    return ans;
}

int main() {
    int L, R;
    cin >> R;
    int ans = 0;
    for(int i = 1; i <= R; i++) {
        ans += getone(i);
    }
    cout << ans << endl;
    return 0;
}
