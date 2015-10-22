#include <iostream>
#include <cstring>
using namespace std;

int value[100];
int w[100];

int dp[1001];

int main() {
    int n, t;
    memset(dp, 0, sizeof(dp));
    cin >> t >> n;
    for(int i = 0; i < n; i++) {
        cin >> w[i] >> value[i];
    }
    for(int i = 0; i <= t; i++) {
        dp[i] = -1;
    }
    dp[t] = 0;
    for(int i = 0; i < n; i++) {
        for(int v = 0; v <= t; v++) {
            int __v = v + w[i];
            if(__v <= t && dp[__v] != -1) {
                dp[v] = max(dp[v], dp[__v] + value[i]);
            }
        }
    }
    int __ans = 0;
    for(int v = 0; v <= t; v++) {
        __ans = max(__ans, dp[v]);
    }
    cout << __ans << endl;
    return 0;
}
