#include <iostream>
#include <string>

using namespace std;

int main() {
    long long a;
    cin >> a;
    cout << ((a % 15 == 0) ? "YES" : "NO") << endl;
    return 0;
}
