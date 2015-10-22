#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <iomanip>

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
    int data[4] = {0, 0, 0, 0};
    for(int i = 0; i < n; i++) {
        if(vec[i] <= 18) data[0]++;
        else if(19 <= vec[i] && vec[i] <= 35) data[1]++;
        else if(36 <= vec[i] && vec[i] <= 60) data[2]++;
        else if(vec[i] >= 61) data[3]++;
    }
    cout << setiosflags(ios::fixed) << setprecision(2)
         << (double)data[0] / n * 100 << "% "
         << (double)data[1] / n * 100 << "% "
         << (double)data[2] / n * 100 << "% "
         << (double)data[3] / n * 100 << "%" << endl;
    return 0;
}
