#include <iostream>
using namespace std;

int main() {
    int k;
    double sn = 0, i = 1;
    cin >> k;
    while(sn <= k) {
        sn += 1 / i;
        i++;
    }
    cout << static_cast<int>(i - 1) << endl;
    return 0;
}
