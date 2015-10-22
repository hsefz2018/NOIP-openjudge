#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;
    cout << setiosflags(ios::fixed) << setprecision(3) << sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2)) << endl;
    return 0;
}
