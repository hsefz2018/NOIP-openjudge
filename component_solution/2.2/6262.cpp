#include <iostream>
#include <cstring>
using namespace std;

const int map_healthy = 0;
const int map_blank = 1;
const int map_disease = 2;
int map[2][233][233];

#define inflect(k, i, j) if(i >= 0 && j >= 0 && i < n && j < n) if(map[k][i][j] != map_blank) map[(k + 1) % 2][i][j] = map_disease;

int main() {
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            char ch;
            cin >> ch;
            if(ch == '.') map[0][i][j] = map_healthy;
            if(ch == '@') map[0][i][j] = map_disease;
            if(ch == '#') map[0][i][j] = map_blank;
        }
    }
    cin >> m;
    for(int k = 0; k < m - 1; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                map[(k + 1) % 2][i][j] = map[k % 2][i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(map[k % 2][i][j] == map_disease) {
                    inflect(k % 2, i + 1, j);
                    inflect(k % 2, i, j + 1);
                    inflect(k % 2, i - 1, j);
                    inflect(k % 2, i, j - 1);
                }
            }
        }
    }
    int __ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(map[(m + 1) % 2][i][j] == map_disease) {
                __ans++;
            }
        }
    }
    cout << __ans << endl;
    return 0;
}
