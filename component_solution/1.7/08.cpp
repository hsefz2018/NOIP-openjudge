#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    for(string::iterator iter = s.begin(); iter != s.end(); iter++) {
        if('a' <= *iter && *iter <= 'z') {
            cout << static_cast<char>((*iter - 'a' + 1) % 26 + 'a');
        } else if('A' <= *iter && *iter <= 'Z') {
            cout << static_cast<char>((*iter - 'A' + 1) % 26 + 'A');
        } else {
            cout << *iter;
        }
    }
    cout << endl;
    return 0;
}
