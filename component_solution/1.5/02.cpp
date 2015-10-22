#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double __sum = 0.0;
    double __input;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> __input;
        __sum += __input;
    }
    cout << fixed << setprecision(4) << static_cast<double>(__sum) / n << endl;
    return 0;
}
