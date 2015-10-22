#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int n;
    cin >> n;
    int __a, __b, __c, __d;
    for(int a = 1; a <= n; a++) {
        __a = a * a * a;
        for(int b = 2; (__b = b * b * b) <= __a; b++) {
            for(int c = b; (__c = c * c * c) + __b <= __a; c++) {
                for(int d = c; (__d = d * d * d ) + __c + __b <= __a; d++) {
                    if(__b + __c + __d == __a) {
                        cout << "Cube = " << a <<", Triple = (" << b << "," << c << "," << d <<")" << endl;
                    }
                }
            }
        }
    }
    return 0;
}
