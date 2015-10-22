#include <iostream>
#include <string>
#include <map>

using namespace std;

map <char, char> map_data;

int main() {
    map_data['A'] = 'T';
    map_data['T'] = 'A';
    map_data['G'] = 'C';
    map_data['C'] = 'G';
    string s;
    cin >> s;
    for(string::iterator iter = s.begin(); iter != s.end(); iter++) {
        cout << map_data[*iter];
    }
    cout << endl;
    return 0;
}
