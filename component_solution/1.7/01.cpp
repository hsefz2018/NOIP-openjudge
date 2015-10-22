#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int ans = 0;
    cin >> str;
    for(string::iterator iter = str.begin(); iter != str.end(); iter++) {
        if('0' <= *iter && *iter <= '9') ans++;
    }
    cout << ans << endl;
    return 0;
}
