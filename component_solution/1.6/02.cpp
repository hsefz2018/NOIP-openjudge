#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> data;
    for(int i = 0; i < 10; i++) {
        int _tmp;
        cin >> _tmp;
        data.push_back(_tmp);
    }
    int k; cin >> k;
    int ans = 0;
    for(int i = 0; i < 10; i++) {
        if(data[i] <= k + 30) ans++;
    }
    cout << ans << endl;
    return 0;
}
