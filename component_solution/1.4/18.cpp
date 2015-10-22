#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;
    cout << (((-1 <= x && x <= 1) && (-1 <= y && y <= 1)) ? "yes" : "no") << endl;
    return 0;
}
