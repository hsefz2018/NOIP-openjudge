#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    cout << setiosflags(ios::fixed) << setprecision(9) << static_cast<double>(a) / b << endl;
    return 0;
}
