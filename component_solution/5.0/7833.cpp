//UNVERIFIED

#include <iostream>
using namespace std;

int main() {
    long long a, b;
    long long ans = 1;
    cin >> a >> b;
    for(long long i = 0; i < b; i++) {
        ans = (ans * a) % 1000;
    }
    cout << ans << endl;
    return 0;
}
