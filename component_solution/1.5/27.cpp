//UNVERIFIED

#include <iostream>
using namespace std;

int main() {
    int m, k;
    cin >> m >> k;
    if(m % 19 == 0) {
        int ans = 0;
        while(k > 0) {
            ans += (k % 10 == 3) ? 1 : 0;
            k /= 10;
        }
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
