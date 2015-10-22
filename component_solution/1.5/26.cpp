//UNVERIFIED
#include <iostream>
using namespace std;

int main() {
    long long a;
    long long ans = 0;
    bool flag = false;
    cin >> a;
    if(a < 0) {
        a = -a;
        flag = true;
    }
    while(a > 0) {
        ans = ans * (a % 10);
        a /= 10;
    }
    if(flag) ans = -a;
    return 0;
}
