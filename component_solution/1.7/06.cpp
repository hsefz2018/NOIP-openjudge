#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    if('0' <= a[0] && a[0] <= '9') {
        cout << "no" << endl;
    } else {
        bool flag = true;
        for(int i = 0; i < a.size(); i++) {
            if(!(
                ('0' <= a[i] && a[i] <= 9) ||
                ('a' <= a[i] && a[i] <= 'z') ||
                ('A' <= a[i] && a[i] <= 'Z') ||
                a[i] == '_'
            )) {
                cout << "no" << endl;
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "yes" << endl;
        }
    }
    return 0;
}
