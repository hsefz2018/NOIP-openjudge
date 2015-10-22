#include <iostream>
using namespace std;

long long getSpilt(long long N, long long lstNumber) {
    long long ans = 1;
    for(long long i = lstNumber; i <= N / i; i++) {
        if(N % i == 0) {
            ans += getSpilt(N / i, i);
        }
    }
    return ans;
}

void runOnce() {
    long long N;
    cin >> N;
    cout << getSpilt(N, 2) << endl;
}

int main() {
    int k;
    cin >> k;
    for(int i = 0; i < k; i++) {
        runOnce();
    }
    return 0;
}
