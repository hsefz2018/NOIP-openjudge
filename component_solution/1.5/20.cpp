//UNVERIFIED

#include <iostream>
using namespace std;

int main() {
    int m, n;
    int ans = 0;
    cin >> n;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int _tmp;
        cin >> _tmp;
        if(n < _tmp) {
            ans++;
        } else {
            n -= _tmp;
        }
    }
    cout << ans << endl;
    return 0;
}
