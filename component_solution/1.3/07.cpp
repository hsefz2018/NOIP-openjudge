#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, d, x;
    cin >> x >> a >> b >> c >> d;
    cout << setiosflags(ios::fixed) << setprecision(7) << a * x * x * x + b * x * x + c * x + d << endl;
    return 0;
}
