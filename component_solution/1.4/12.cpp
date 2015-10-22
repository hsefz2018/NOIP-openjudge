#include <iostream>
#include <string>

using namespace std;

int main() {
    long long a;
    cin >> a;
    double __dat_bike = (27 + 23 + a / 3.0);
    double __dat_walk = (a / 1.2);
    if(__dat_bike > __dat_walk) {
        cout << "Walk" << endl;
    } else if(__dat_bike == __dat_walk) {
        cout << "All" << endl;
    } else if(__dat_bike < __dat_walk) {
        cout << "Bike" << endl;
    }
    return 0;
}
