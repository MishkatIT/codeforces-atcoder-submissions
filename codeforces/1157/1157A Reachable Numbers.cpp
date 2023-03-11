/*
    author    : MishkatIT
    created   : Saturday 2023-03-11-23.47.39
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    map<int, bool> mp;
    while(!mp[n])
    {
        mp[n++] = true;
        while(n % 10 == 0)
            n /= 10;
    }
    cout << (int)mp.size();
    return 0;
}

