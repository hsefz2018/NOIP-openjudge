#include <iostream>
using namespace std;

int main() {
    int m, n;
    int __sum = 0;
    cin >> m >> n;
    for(int i = m; i <= n; i++) {
        if(i % 17 == 0) {
            __sum += i;
        }
    }
    cout << __sum << endl;
    return 0;
}
