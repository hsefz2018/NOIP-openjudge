#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++) {
        cout << static_cast<char>(static_cast<int>(a[i]) + static_cast<int>(a[(i + 1) % a.size()]));
    }
    cout << endl;
    return 0;
}
