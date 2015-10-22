#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    for(int i = 0; i < str.size(); i++) {
        if('a' <= str[i] && str[i] <= 'z') {
            str[i] = (str[i] - 'a' + 3) % 26 + 'A';
        } else if('A' <= str[i] && str[i] <= 'Z') {
            str[i] = (str[i] - 'A' + 3) % 26 + 'a';
        }
    }
    cout << str << endl;
    return 0;
}
