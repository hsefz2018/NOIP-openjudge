#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char a1;
    int a2;
    float a3;
    double a4;
    cin >> a1 >> a2 >> a3 >> a4;
    cout << a1 << " " << a2 << " ";
    cout << setiosflags(ios::fixed) << setprecision(6) << a3 << " " << a4 << endl;
    return 0;
}
