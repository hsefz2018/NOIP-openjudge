#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> data;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int _tmp;
        cin >> _tmp;
        data.push_back(_tmp);
    }
    int k; cin >> k;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(data[i] == k) ans++;
    }
    cout << ans << endl;
    return 0;
}
