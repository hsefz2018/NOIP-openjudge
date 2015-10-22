#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int __max = -2333333, __min = 2333333;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _tmp;
        cin >> _tmp;
        if(_tmp > __max) __max = _tmp;
        if(_tmp < __min) __min = _tmp;
    }
    cout << __max - __min << endl;
    return 0;
}
