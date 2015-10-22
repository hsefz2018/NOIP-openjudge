#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    cout << setiosflags(ios::fixed) << setprecision(3) << static_cast<double>(b) / a * 100 << "%" << endl;
    return 0;
}
