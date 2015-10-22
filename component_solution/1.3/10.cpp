#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    cout << setiosflags(ios::fixed) << setprecision(2) << 1.0 / (1.0 / a + 1.0 / b) << endl;
    return 0;
}
