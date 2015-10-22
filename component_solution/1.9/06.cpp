#include <iostream>
#include <string>
#include <map>

using namespace std;

map <char, int> data;

int main() {
    string str;
    cin >> str;
    for(string::iterator iter = str.begin(); iter != str.end(); iter++) {
        data[*iter]++;
    }
    int __max = -2333333, __min = 2333333;
    for(map <char, int>::iterator iter = data.begin(); iter != data.end(); iter++) {
        if(iter->second > __max) __max = iter->second;
        if(iter->second < __min) __min = iter->second;
    }
    int __ans = __max - __min;
    bool isPrime = true;
    for(int i = 2; i * i <= __ans; i++) {
        if(__ans % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime) {
        cout << "Lucky Word" << endl << __ans << endl;
    } else {
        cout << "No Answer" << endl << 0 << endl;
    }
    return 0;
}
