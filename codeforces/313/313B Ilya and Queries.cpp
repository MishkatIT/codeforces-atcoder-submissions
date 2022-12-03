/*
    author    : MishkatIT
    created   : Saturday 2022-12-03-20.46.20
    problem   : 313 B. Ilya and Queries
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    vector<long long> psum(str.length() + 1, 0);
    for(int i = 1; i < str.size(); i++)
    {
        if(str[i] == str[i - 1])
            psum[i + 1] = psum[i] + 1;
        else
            psum[i + 1] = psum[i];
    }
//     for(auto i: psum)
//            cout << i << ' ';
    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << psum[r] - psum[l] << '\n';
    }
    return 0;
}

