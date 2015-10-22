#include <iostream>
using namespace std;

long long play(long long x, long long y, long long k) {
    if(x == y) return k;
    if(x >= 2 * y) {
        return k;
    } else {
        return play(y, x % y, 1 - k);
    }
}

int main() {
    long long x, y;
    while(true) {
        cin >> x >> y;
        if(x == 0 && y == 0) break;
        if(play(max(x, y), min(x, y), 1)) {
            cout << "win" << endl;
        } else {
            cout << "lose" << endl;
        }
    }
    return 0;
}
