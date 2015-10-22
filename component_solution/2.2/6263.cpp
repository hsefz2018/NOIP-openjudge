//INCOMPLETE
#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

typedef struct num_data {
    int type, data;
} num_data;

int calc(const string &calcStr) {
    vector<int> pos;
    vector<num_data>dat;
    for(int i = 0; i < calcStr.size(); i++) {
        if(calcStr[i] == '(') {
            pos.push_back(i);
        } else if(calcStr[i] == ')') {
            getData(calcStr, pos.back(), i);
            pos.pop_back();
        }
    }
    return 0;
}

int main() {
    char calcStr[2000];
    while(cin.good()) {
        cin.getline(calcStr, 1001);
        calc("(" + string(calcStr) + ")");
    }
    return 0;
}
