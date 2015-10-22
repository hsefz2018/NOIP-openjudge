//UNVERIFIED

#include <iostream>

using namespace std;

int main() {
    int n;
    int ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _x, _y;
        cin >> _x >> _y;
        if(90 <= _x && x <= 140 && 60 <= _y && _y <= 90) {
            ans++;
        } else {
            ans = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
