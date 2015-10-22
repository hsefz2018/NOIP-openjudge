//UNVERIFIED
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int lstFound = 0;
    for(int i = 2, j = 0; j < n; i++) {
        bool found = true;
        for(int k = 2; k * k <= i; k++) {
            if(i % k == 0) {
                found = false;
                break;
            }
        }
        if(found) {
            j++;
            lstFound = i;
        }
    }
    cout << lstFound << endl;
    return 0;
}
