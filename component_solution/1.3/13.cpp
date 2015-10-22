#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, _rn = 0;
    cin >> n;
    while(n > 0) {
        _rn = _rn * 10 + n % 10;
        n /= 10;
    }
    cout << setw(3) << setfill('0') << _rn << endl;
    return 0;
}
