//UNVERIFIED

#include <iostream>
#include <cstring>

using namespace std;

int dat[10000];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        dat[i] = 1;
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j += (i + 1)) {
            dat[j] = 1 - dat[j];
        }
    }
    bool isFirst = true;
    for(int i = 0; i < n; i++) {
        if(dat[i] == 1) {
            if(!isFirst) {
                cout << ",";
            }
            cout << i + 1;
            if(isFirst) {
                isFirst = false;
            }
        }
    }
    cout << endl;
    return 0;
}
