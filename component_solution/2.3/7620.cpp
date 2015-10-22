#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

typedef struct interval {
    int a, b;
} interval;

bool cmp(const interval &a, const interval &b) {
    if(a.a == b.a) {
        return a.b < b.b;
    }
    return a.a < b.a;
}

vector<interval> vec;

int main() {
    interval tmp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tmp.a >> tmp.b;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end(), cmp);
    int lstValue = vec.begin()->b;
    vector<interval>::iterator iter = vec.begin(); iter++;
    for(; iter != vec.end(); iter++) {
        if(lstValue >= iter->a) {
            lstValue = max(lstValue, iter->b);
        } else {
            lstValue = -1;
            break;
        }
    }
    if(lstValue != -1) {
        vector<interval>::iterator _end = vec.end(); _end--;
        cout << (vec.begin()->a) << " " << lstValue << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
