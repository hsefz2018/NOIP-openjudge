#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double n;
    cin >> n;
    cout << setiosflags(ios::fixed) << setprecision(2) << (n < 0.0 ? -n : n) << endl;
    return 0;
}
