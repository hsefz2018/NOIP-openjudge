#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;

int main() {
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    for(vector<int>::iterator iter1 = arr.begin(); iter1 != arr.end(); iter1++) {
        for(vector<int>::iterator iter2 = arr.begin(); iter2 != arr.end(); iter2++) {
            if(iter1 != iter2) {
                if(*iter1 + *iter2 == k) {
                    cout << "yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "no" << endl;
    return 0;
}
