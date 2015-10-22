#include <iostream>
using namespace std;

int __run(int leg) {
    int __aniMin = 23333, __aniMax = 0;
    for(int i = 0; i <= leg / 2; i++) {
        int __tmp = leg - i * 2;
        if(__tmp % 4 == 0) {
            __aniMin = min(__aniMin, i + (leg - i * 2) / 4);
            __aniMax = max(__aniMax, i + (leg - i * 2) / 4);
        }
    }
    cout << (__aniMin == 23333 ? 0 : __aniMin) << " " << __aniMax << endl;
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        __run(k);
    }
    return 0;
}
