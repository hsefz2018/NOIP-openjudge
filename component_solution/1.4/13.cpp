#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;
    cin >> x;
    cout << setiosflags(ios::fixed) << setprecision(3);
    if(0 <= x && x < 5) {
        cout << -x + 2.5 << endl;
    } else if(5 <= x && x < 10) {
        cout << 2 - 1.5 * (x-3) * (x-3) << endl;
    } else if(10 <= x < 20) {
        cout << x / 2 - 1.5 << endl;
    }
}
