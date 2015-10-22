#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

typedef int pos;

int runOnce() {
    string str;
    vector<pos> cstack;

    if(!cin.good()) return 1;

    cin >> str;
    string ans(str.size(), ' ');

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '(') {
            cstack.push_back(i);
        } else if(str[i] == ')') {
            if(!cstack.empty()) {
                cstack.pop_back();
            } else {
                ans[i] = '?';
            }
        }
    }
    while(!cstack.empty()) {
        ans[cstack.back()] = '$';
        cstack.pop_back();
    }
    cout << str << endl << ans << endl;
    return 0;
}

int main() {
    while(!runOnce());
    return 0;
}
