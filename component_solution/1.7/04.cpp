#include <iostream>
#include <string>
#include <map>

using namespace std;

map< string, map<string, int> > dat_map;
map<int, string> ans;

int main() {
    dat_map["Rock"]["Rock"] = 0;
    dat_map["Scissors"]["Rock"] = 1;
    dat_map["Paper"]["Rock"] = -1;
    dat_map["Rock"]["Scissors"] = -1;
    dat_map["Scissors"]["Scissors"] = 0;
    dat_map["Paper"]["Scissors"] = 1;
    dat_map["Rock"]["Paper"] = 1;
    dat_map["Scissors"]["Paper"] = -1;
    dat_map["Paper"]["Paper"] = 0;
    ans[-1] = "Player1";
    ans[0] = "Tie";
    ans[1] = "Player2";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        cout << ans[dat_map[a][b]] << endl;
    }
    return 0;
}
