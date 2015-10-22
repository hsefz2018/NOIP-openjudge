#include <iostream>
#include <cstring>
#include <string>
#include <map>

using namespace std;

map<char, char> map_data;
bool visited[2][256];

int main() {
    string com, ori, dat;
    cin >> com >> ori >> dat;
    memset(visited, 0, sizeof(visited));
    bool hacked = true;
    for(int i = 0; i < com.size(); i++) {
        if(visited[0][com[i]]) {
            if(map_data[com[i]] != ori[i]) {
                hacked = false;
                break;
            }
        } else if(visited[1][ori[i]]) {
            hacked = false;
            break;
        }
        visited[0][com[i]] = visited[1][ori[i]] = true;
        map_data[com[i]] = ori[i];
    }
    if(hacked) {
        string ans = "";
        for(int i = 0; i < dat.size(); i++) {
            map<char, char>::iterator iter;
            if((iter = map_data.find(dat[i])) != map_data.end()) {
                ans.push_back(iter->second);
            } else {
                cout << "Failed" << endl;
                hacked = false;
                break;
            }
        }
        if(hacked) {
            cout << ans << endl;
        }
    } else {
        cout << "Failed" << endl;
    }
    return 0;
}
