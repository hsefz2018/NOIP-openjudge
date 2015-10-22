#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main() {
    int n;
    vector<int> vec;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _tmp;
        cin >> _tmp;
        vec.push_back(_tmp);
    }
    reverse(vec.begin(), vec.end());
    for(int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
