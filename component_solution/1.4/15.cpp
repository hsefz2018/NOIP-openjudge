#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a, b), c) << endl;
    return 0;
}
