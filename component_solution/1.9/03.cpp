#include <iostream>
using namespace std;

int main() {
    int n;
    int __max = 0, __maxday = 0;
    bool flag = false;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int __1, __2;
        cin >> __1 >> __2;
        if(__1 + __2 >= 8) {
            flag = true;
            if(__1 + __2 > __max) {
                __maxday = i + 1;
                __max = __1 + __2;
            }
        }
    }
    cout << (flag ? __maxday : 0) << endl;
    return 0;
}
