#include <iostream>
using namespace std;

int main() {
    int n;
    int __ans = 0, __max = -1000001;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> _tmp;
        __max = max(__max, _tmp);
        __ans += _tmp;
    }
    cout << __ans - __max << endl;
    return 0;
}
