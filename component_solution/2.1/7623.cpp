#include <iostream>
#include <vector>
using namespace std;

vector<int> store;

int main() {
    int k, n1, n2 ,n3 ,n4, n5;
    bool found = false;
    cin >> k >> n1 >> n2 >> n3 >> n4 >> n5;
    k *= 100;
    for(int depth = 1; depth <= k; depth++) {
        for(int a = 1; a * n1 < depth; a++) {
            int b = depth - a * n1;
            int c = depth - b * n2;
            int d = depth - c * n3;
            int e = depth - d * n4;
            int _a = depth - e * n5;
            if(b > 0 && c > 0 && d > 0 && e > 0 && _a == a
                && a != b && a != c && a != d && a != e
                && b != c && b != d && b != e
                && c != d && c != e
                && d != e) {
                cout << depth << " " << a << " " << b << " "
                     << c << " " << d << " " << e << endl;
                found = true;
                return 0;
            }
        }
    }
    cout << "not found" << endl;
    return 0;
}
