//UNVERIFIED

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>

using namespace std;

vector<string> vec;

stack<double> expr;

int main() {
    string _str;
    while(cin.good()) {
        cin >> _str;
        if(_str == "x") break;
        vec.push_back(_str);
    }
    for(vector<string>::reverse_iterator iter = vec.rbegin(); iter != vec.rend(); iter++) {
        if(*iter == "+" || *iter == "-" || *iter == "*" || *iter == "/") {
            double _a, _b;
            _a = expr.top(); expr.pop();
            _b = expr.top(); expr.pop();
            if(*iter == "+") {
                expr.push(_a + _b);
            } else if(*iter == "-") {
                expr.push(_a - _b);
            } else if(*iter == "*") {
                expr.push(_a * _b);
            } else if(*iter == "/") {
                expr.push(_a / _b);
            }
        } else {
            double _x;
            stringstream s_pipe;
            s_pipe << *iter;
            s_pipe >> _x;
            expr.push(_x);
        }
    }
    cout << fixed << expr.top() << endl;
    return 0;
}
