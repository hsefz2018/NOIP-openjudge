//UNVERIFIED

#include <iostream>
using namespace std;

int main() {
    int N;
    int ans = 0;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        bool isSeven = false;
        if(i % 7 == 0) {
            isSeven = true;
        } else {
            int _i = i;
            while(_i > 0) {
                if(_i % 10 == 7) {
                    isSeven = true;
                    break;
                }
                _i /= 10;
            }
        }
        if(!isSeven) {
            ans += i * i;
        }
    }
    cout << ans << endl;
    return 0;
}
