#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    long long a;
    cin >> a;
    cout << (((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) ? "Y" : "N") << endl;
    return 0;
}
