//UNVERIFIED

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> vec;

int main() {
    int n, m;
    int _tmp;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> _tmp;
        vec.push_back(_tmp);
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> _tmp;
        vector<int>::iterator _x = lower_bound(vec.begin(), vec.end(), _tmp);
        vector<int>::iterator _y = upper_bound(vec.begin(), vec.end(), _tmp);
        if(_x == vec.end()) _x--;
        if(_y == vec.end()) _y--;
        if(_tmp - static_cast<int>(*_x) <= static_cast<int>(*_y) - _tmp) {
            cout << *_x << endl;
        } else {
            cout << *_y << endl;
        }
    }
    return 0;
}
