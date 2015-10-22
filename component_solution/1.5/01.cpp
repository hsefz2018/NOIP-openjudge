#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int __sum = 0;
    int __input;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> __input;
        __sum += __input;
    }
    cout << fixed << setprecision(2) << static_cast<double>(__sum) / n << endl;
    return 0;
}
