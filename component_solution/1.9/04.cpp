#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string __maxName; int score = 0, Ans = 0;
    for(int i = 0; i < n; i++) {
        string __name;
        cin >> __name;
        int __scA, __scB;
        cin >> __scA >> __scB;
        string __A, __B;
        cin >> __A >> __B;
        int __essay;
        cin >> __essay;
        int __scoreSum = (((__scA > 80 && __essay >= 1) ? 8000 : 0)
                        + ((__scA > 85 && __scB > 80) ? 4000 : 0)
                        + ((__scA > 90) ? 2000 : 0)
                        + ((__A == "Y" && __scA > 85) ? 1000 : 0)
                        + ((__B == "Y" && __scB > 80) ? 850 : 0));
        if(__scoreSum > score) {
            score = __scoreSum;
            __maxName = __name;
        }
        Ans += score;
    }
    cout << __maxName << endl
         << score << endl
         << Ans << endl;
    return 0;
}
