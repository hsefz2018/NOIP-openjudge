#include <iostream>
#include <iomanip>

using namespace std;

const double math_pi = 3.14159;

int main() {
    double r;
    cin >> r;
    cout << setiosflags(ios::fixed) << setprecision(4) << r * 2 << " " << r * 2 * math_pi << " "
    << r * r * math_pi << endl;
    return 0;
}
