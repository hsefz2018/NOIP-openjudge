#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n, k;
    vector<long long> vec;
    cin >> n;
    for(int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end(), greater<long long>());
    cin >> k;
    for(int i = 0; i < k; i++) {
        cout << vec[i] << endl;
    }
    return 0;
}
