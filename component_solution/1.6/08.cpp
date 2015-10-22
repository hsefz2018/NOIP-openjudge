#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int data[23333333];
int main() {
    string a, b;
    cin >> a >> b;

    memset(data, 0, sizeof(data));
    for(int i = 0; i < max(a.size(), b.size()); i++) {
        int __tmp = 0;
        if(i < a.size()) __tmp += a[i] - '0';
        if(i < b.size()) __tmp += b[i] - '0';
        data[i] += __tmp % 10;
        data[i + 1] += __tmp / 10;
    }
    int i = 23333332;
    while(i >= 0 && data[i] == 0) i--;
    i = (i <= 0) ? 1 : i;
    for(int j = i; j >= 0; j--) {
        cout << data[j];
    }
    cout << endl;
    return 0;
}
