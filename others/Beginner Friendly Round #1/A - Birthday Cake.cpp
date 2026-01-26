/*
    author    : MishkatIT
    created   : Tuesday 2024-03-05-20.41.18
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    set<int> v{1, 2, 3, 4, 6, 12};
    int x;
    cin >> x;
    if (v.find(x) != v.end()) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

    return 0;
}
