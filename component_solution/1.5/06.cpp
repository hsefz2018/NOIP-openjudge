#include <iostream>
using namespace std;

int main() {
    int n;
    int a, b, c; a = b = c = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _a, _b, _c;
        cin >> _a >> _b >> _c;
        a += _a;
        b += _b;
        c += _c;
    }
    cout << a << " " << b << " " << c << " " << a + b + c << endl;
    return 0;
}
