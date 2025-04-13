/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    --k; // making 0 based
    str[k] = 'a' + str[k] - 'A';
    // or you can use this. 
    // str[k - 1] = tolower(str[k - 1]);  
    cout << str;
    return 0;
}