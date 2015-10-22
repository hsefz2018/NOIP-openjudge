#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;

    cin >> str;

    string _target = str;
    reverse(str.begin(), str.end());

    cout << ((str == _target) ? 1 : 0) << endl;
    return 0;
}
