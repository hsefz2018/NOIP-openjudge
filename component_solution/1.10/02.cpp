#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> data;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int __tmp;
        cin >> __tmp;
        if(__tmp % 2 == 1) {
            data.push_back(__tmp);
        }
    }
    sort(data.begin(), data.end());
    cout << data[0];
    for(int i = 1; i < data.size(); i++) {
        cout << "," << data[i];
    }
    return 0;
}
