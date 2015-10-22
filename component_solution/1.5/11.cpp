#include <iostream>
using namespace std;

int main() {
    long long a, n;
    cin >> a >> n;
    long long ans = 1;
    for(long long i = 0; i < n; i++) {
        ans *= a;
    }
    cout << ans << endl;
    return 0;
}
