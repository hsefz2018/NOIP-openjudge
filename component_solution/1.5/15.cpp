#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    double ratio = 0;
    cin >> n;
    cin >> x >> y;
    ratio = static_cast<double>(y) / static_cast<double>(x);
    for(int i = 0; i < n - 1; i++) {
        cin >> x >> y;
        double _ratio = static_cast<double>(y) / static_cast<double>(x);
        if(ratio - _ratio > 0.05) {
            cout << "worse" << endl;
        } else if(ratio - _ratio < -0.05) {
            cout << "better" << endl;
        } else {
            cout << "same" << endl;
        }
    }
    return 0;
}
