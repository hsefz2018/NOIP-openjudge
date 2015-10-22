#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;
    long long n;
    cin >> x >> n;
    for(long long i = 0; i < n; i++) {
        x *= 1.001;
    }
    cout << setiosflags(ios::fixed) << setprecision(4) << x << endl;
    return 0;
}
