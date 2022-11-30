/*
    author    : MishkatIT
    created   : Wednesday 2022-11-30-02.21.58
    problem   : 598 B. Queries on a String
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    int q;
    cin >> q;
    while(q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        k = k % (r - l + 1);
        reverse(str.begin() + (l - 1), str.begin() + r );
        reverse(str.begin() + (l - 1), str.begin() +(l + k - 1));
        reverse(str.begin() + (l + k - 1), str.begin() + r);
    }
    cout << str;
    return 0;
}
