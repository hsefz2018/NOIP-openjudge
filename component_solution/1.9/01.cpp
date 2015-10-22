#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> data;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _tmp;
        cin >> _tmp;
        data.push_back(_tmp);
    }
    int _find = 0; cin >> _find;
    for(int i = 0; i < n; i++) {
        if(data[i] == _find) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}
