//UNVERIFIED

#include <iostream>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

map <int, int> sumset;

int main() {
    while(cin.good()) {
        int _tmp;
        cin >> _tmp;
        sumset[_tmp]++;
    }
    for(map<int, int>::iterator iter = sumset.begin(); iter != sumset.end(); iter++) {
        cout << iter->first << " " << iter->second << endl;
    }
    return 0;
}
