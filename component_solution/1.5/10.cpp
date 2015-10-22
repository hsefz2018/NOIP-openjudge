#include <iostream>
using namespace std;

int main() {
    int N, m;
    int __ans = 0;
    cin >> N >> m;
    for(int i = 0; i < N; i++) {
        int __tmp;
        cin >> __tmp;
        if(__tmp == m) {
            __ans++;
        }
    }
    cout << __ans << endl;
    return 0;
}
