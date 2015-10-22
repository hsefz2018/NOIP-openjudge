#include <iostream>
#include <vector>
using namespace std;

double price[] = {
    28.9,
    32.7,
    45.6,
    78,
    35,
    86.2,
    27.8,
    43,
    56,
    65
};

int main() {
    vector<int> data;
    for(int i = 0; i < 10; i++) {
        int _tmp;
        cin >> _tmp;
        data.push_back(_tmp);
    }
    double ans = 0;
    for(int i = 0; i < 10; i++) {
        ans += data[i] * price[i];
    }
    cout << ans << endl;
    return 0;
}
