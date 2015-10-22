#include <iostream>

using namespace std;

int main() {
    int z, q, s, l;
    for(int z = 10; z <= 50; z += 10) {
        for(int q = 10; q <= 50; q += 10) {
            for(int s = 10; s <= 50; s += 10) {
                for(int l = 10; l <= 50; l += 10) {
                    if(z + q == s + l) {
                        if(z + l > s + q) {
                            if(z + s < q) {
                                cout << "z " << z << endl;
                                cout << "q " << q << endl;
                                cout << "s " << s << endl;
                                cout << "l " << l << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
