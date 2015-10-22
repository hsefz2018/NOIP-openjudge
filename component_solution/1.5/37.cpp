//UNVERIFIED

#include <iostream>
using namespace std;

int main() {
    int m, n, ch;
    char t;

    cin >> m >> n >> t >> ch;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                cout << t;
            } else {
                cout << ((ch == 0) ? ' ' : t);
            }
        }
        cout << endl;
    }
    return 0;
}
