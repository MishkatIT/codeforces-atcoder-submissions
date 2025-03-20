#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i + 1 < str.size(); i++) {
        if (str[i] <= str[i + 1]) {
            cout << "No" << '\n';
            return 0;
        }
    }

    cout << "Yes" << '\n';  
    return 0;
}
