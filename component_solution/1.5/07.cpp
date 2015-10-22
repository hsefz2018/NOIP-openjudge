#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    if(m % 2 == 0) m++;
    if(n % 2 == 0) n--;
    cout << ((m <= n) ? (m + n) * ((n - m) / 2 + 1) / 2 : 0) << endl;
    return 0;
}
