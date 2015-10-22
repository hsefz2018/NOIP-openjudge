#include <iostream>
#include <string>
using namespace std;

int main() {
    double delta;
    string a, b;
    cin >> delta;
    cin >> a >> b;
    int ans = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == b[i]) ans++;
    }
    if(static_cast<double>(ans) / static_cast<double>(a.size()) >= delta) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
