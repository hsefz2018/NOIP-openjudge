#include <iostream>

using namespace std;

int __run() {
    long long a, b;
    cin >> a >> b;
    long long __time = 0;
    while(true) {
        a -= b;
        if(a <= 0) break;
        a *= 2;
        b *= 1.05;
        a = (a > 1000000) ? 1000000 : a;
        __time++;
    }
    cout << __time + 1 << endl;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        __run();
    }
    return 0;
}
