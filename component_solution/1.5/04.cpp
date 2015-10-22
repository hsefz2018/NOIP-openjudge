#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    long long __sum = 0;
    long long __input;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> __input;
        __sum = max(__sum, __input);
    }
    cout << __sum << endl;
    return 0;
}
