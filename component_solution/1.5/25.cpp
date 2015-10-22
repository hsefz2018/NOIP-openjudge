#include <iostream>
using namespace std;

int main() {
    long long num;
    cin >> num;
    while(num > 0) {
        cout << num % 10 << " ";
        num /= 10;
    }
    return 0;
}
