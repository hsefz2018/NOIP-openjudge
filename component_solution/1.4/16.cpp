#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << (((a + b > c) && (b + c > a) && (a + c > b)) ? "yes" : "no") << endl;
    return 0;
}
