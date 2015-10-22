#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    long long a;
    char isFast;
    long long __ans = 0;
    cin >> a >> isFast;
    __ans += 8;
    __ans += (a > 1000) ? (ceil((a - 1000.0) / 500.0) * 4) : 0;
    if(isFast == 'y') __ans += 5;
    cout << __ans << endl;
    return 0;
}
