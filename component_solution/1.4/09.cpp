#include <iostream>
#include <string>

using namespace std;

int main() {
    long long a;
    cin >> a;
    cout << ((a % 3 == 0) ? "3 " : "");
    cout << ((a % 5 == 0) ? "5 " : "");
    cout << ((a % 7 == 0) ? "7 " : "");
    cout << ((a % 3 != 0 && a % 5 != 0 && a % 7 != 0) ? "n " : "") << endl;
    return 0;
}
