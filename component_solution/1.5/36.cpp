//UNVERIFIED

#include <iostream>
using namespace std;

int gettwo(int n) {
    int ans = 0;
    while(n > 0) {
        ans += (n % 10 == 2) ? 1 : 0;
        ans /= 10;
    }
    return ans;
}

int main() {
    int L, R;
    cin >> L >> R;
    int ans = 0;
    for(int i = L; i <= R; i++) {
        ans += gettwo(i);
    }
    cout << ans << endl;
    return 0;
}
