#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int _a, _b;
    cin >> _a >> _b;
    if((_a < 60) ^ (_b < 60)) cout << "1" << endl; else cout << "0" << endl;
    return 0;
}
