#include <iostream>
#include <string>
using namespace std;

string s = "  *\n\
 ***\n\
*****\n";
int main() {
    string ch;
    cin >> ch;
    for(string::iterator iter = s.begin(); iter != s.end(); iter++) {
        if(*iter == '*')
            cout << ch;
        else
            cout << *iter;
    }
    return 0;
}
