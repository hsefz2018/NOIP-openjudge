#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int __anscount = 0, a, b, c;
    int n;
    cin >> n;
    for(c = 0; c * 5 <= n; c++) {
        for(b = 0; b * 2 + c * 5 <= n; b++) {
            for(a = 0; a + b * 2 + c * 5 <= n; a++) {
                if(a + b * 2 + c * 5 == n) {
                    cout << setw(3) << setfill('0') << (++__anscount);
                    cout << setw(12) << setfill(' ') << a;
                    cout << setw(12) << b;
                    cout << setw(12) << c;
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
