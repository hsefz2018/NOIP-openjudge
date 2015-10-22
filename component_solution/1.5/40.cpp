//UNVERIFIED
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;
    for(int i = 1, j = 0; i < N; j++) {
        if(j >= i) {
            i++;
            j = 0;
        }
        ans += i;
    }
    cout << ans << endl;
    return 0;
}
