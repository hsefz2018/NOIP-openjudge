#include <iostream>
using namespace std;

int main() {
    int k;
    int a, b, c; a = b = c = 0;
    cin >> k;
    for(int i = 0; i < k; i++) {
        int __tmp;
        cin >> __tmp;
        if(__tmp == 1) a++;
        if(__tmp == 5) b++;
        if(__tmp == 10) c++;
    }
    cout << a << endl << b << endl << c << endl;
    return 0;
}
