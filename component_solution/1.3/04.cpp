#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    cout << static_cast<int>(a / b) << " " << a % b << endl;
    return 0;
}
