#include <iostream>
#include <iomanip>
using namespace std;

const double math_pi = 3.14;

int main() {
    double r;
    cin >> r;
    cout << setiosflags(ios::fixed) << setprecision(2) << static_cast<double>(4) / 3.0 * math_pi * r * r * r << endl;
    return 0;
}
