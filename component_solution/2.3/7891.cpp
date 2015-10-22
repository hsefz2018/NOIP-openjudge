#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    for(double x = -100.00; x <= 100.00; x += 0.001) {
        if(abs(a * x * x * x + b * x * x + c * x + d) <= 1e-5) {
            cout << setiosflags(ios::fixed) << setprecision(2) << x << " ";
        }
    }
    cout << endl;
    return 0;
}
