#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <vector>

using namespace std;

typedef struct data {
    string name;
    double score;
} data;

bool cmp(const data &a, const data &b) {
    return a.score < b.score;
}

vector<data> vec;

int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        data __tmp;
        cin >> __tmp.name >> __tmp.score;
        vec.push_back(__tmp);
    }
    sort(vec.begin(), vec.end(), cmp);
    cout << vec[k - 1].name << " " << vec[k - 1].score << endl;
    return 0;
}
