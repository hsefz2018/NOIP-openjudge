#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>

using namespace std;

int main() {
    vector<double> data;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        double _tmp;
        cin >> _tmp;
        data.push_back(_tmp);
    }
    sort(data.begin(), data.end());
    data.erase(data.begin());
    data.erase(--data.end());

    double sum = 0, maxRed = 0;
    for(int i = 0; i < data.size(); i++) {
        sum += data[i];
    }
    double _avg = sum / data.size();
    cout << _avg << " ";
    for(int i = 0; i < data.size(); i++) {
        maxRed = max(maxRed, abs(data[i] - _avg));
    }
    cout << maxRed << endl;
    return 0;
}
