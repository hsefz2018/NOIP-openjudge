#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    long long __sumM = 0, __summ = 233333;
    long long __input;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> __input;
        __sumM = max(__sumM, __input);
        __summ = min(__summ, __input);
    }
    cout << __sumM - __summ << endl;
    return 0;
}
