#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main() {
    int n;
    vector<int> vec1, vec2;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _tmp;
        cin >> _tmp;
        vec1.push_back(_tmp);
    }
    for(int i = 0; i < n; i++) {
        int _tmp;
        cin >> _tmp;
        vec2.push_back(_tmp);
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += vec1[i] * vec2[i];
    }
    cout << ans << endl;
    return 0;
}
