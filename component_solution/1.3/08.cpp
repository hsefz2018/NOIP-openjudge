#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x;
    cin >> x;
    cout << setiosflags(ios::fixed) << setprecision(5) << 5.0 * (x - 32.0) / 9.0 << endl;
    return 0;
}
