#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    long long x, y;
    char oper;
    cin >> x >> y >> oper;
    if(oper == '+') cout << x + y << endl;
    else if(oper == '-') cout << x - y << endl;
    else if(oper == '*') cout << x * y << endl;
    else if(oper == '/') {
        if(y == 0) cout << "Divided by zero!" << endl;
        else cout << x / y << endl;
    } else cout << "Invalid operator!" << endl;
    return 0;
}
