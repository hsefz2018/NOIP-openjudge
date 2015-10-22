#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define _double_fix(x) ((fabs(x) < 1e-5) ? 0.0 : x)

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    cout << setiosflags(ios::fixed) << setprecision(5);
    if(delta == 0) {
        cout << "x1=x2=" << _double_fix((-b + sqrt(delta)) / (2.0 * a));
    } else if(delta > 0) {
        cout << "x1=" << _double_fix((-b + sqrt(delta)) / (2.0 * a)) << ";";
        cout << "x2=" << _double_fix((-b - sqrt(delta)) / (2.0 * a));
    } else if(delta < 0) {
        delta = fabs(delta);
        cout << "x1=" << _double_fix((-b) / (2.0 * a)) << "+" << _double_fix(sqrt(delta) / (2.0 * a)) << "i;";
        cout << "x2=" << _double_fix((-b) / (2.0 * a)) << "-" << _double_fix(sqrt(delta) / (2.0 * a)) << "i";
    }
    return 0;
}
