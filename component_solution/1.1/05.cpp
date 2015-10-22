#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double _x;
    cin >> _x;
    cout << setiosflags(ios::fixed) << setprecision(12) << _x << endl;
    return 0;
}
