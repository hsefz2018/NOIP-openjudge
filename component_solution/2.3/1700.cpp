//UNVERIFIED
#include <iostream>
#include <cstring>

using namespace std;

int dfsData[8];
bool visited[8];

bool checkAvail() {
    for(int i = 0; i < 8; i++) {
        int __x = i, __y = dfsData[i];
        for(int __x1 = __x, __y1 = __y;
            __x1 < 8 && __y1 < 8;
            __x1++, __y1++) {
            if(dfsData[__x1] == __y1 && (__x1 != __x && __y1 != __y)) {
                return false;
            }
        }
        for(int __x2 = __x, __y2 = __y;
            __x2 < 8 && __y2 >= 0;
            __x2++, __y2--) {
            if(dfsData[__x2] == __y2 && (__x2 != __x && __y2 != __y)) {
                return false;
            }
        }
    }
    return true;
}

int __ansCount = 0;

int printData() {
    cout << "No. " << (++__ansCount) << endl;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout << (dfsData[i] == j ? 1 : 0) << " ";
        }
        cout << endl;
    }
    return 0;
}

int dfs(int level) {
    if(level >= 8) {
        if(checkAvail()) {
            printData();
        }
        return 0;
    }
    for(int i = 0; i < 8; i++) {
        dfsData[level] = i;
        if(!visited[i]) {
            visited[i] = true;
            dfs(level + 1);
            visited[i] = false;
        }
    }
    return 0;
}

int main() {
    memset(visited, 0, sizeof(visited));
    dfs(0);
    return 0;
}
