#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch;
    ch = cin.get();
    cout << ((static_cast<int>(ch) % 2 == 0) ? "NO" : "YES") << endl;
    return 0;
}
