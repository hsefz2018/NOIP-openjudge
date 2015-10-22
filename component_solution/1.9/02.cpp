#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main() {
    int n;
    string str; int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int __sum = 0; string __str;
        cin >> __sum >> __str;
        if(__sum >= sum) {
            sum = __sum;
            str = __str;
        }
    }
    cout << str << endl;
    return 0;
}
