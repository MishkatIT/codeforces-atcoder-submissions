/*
    author    : MishkatIT
    created   : Saturday 2022-11-12-04.50.50
    problem   : 37 A. Towers
*/
#include<iostream>
#include<map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int bar;
    map<int, int> mp;
    while(n--)
    {
        cin >> bar;
        mp[bar]++;
    }
    int mx = 0;
    for(auto i: mp)
    {
        if(i.second > mx)
            mx = i.second;
    }
    cout << mx << ' ' << mp.size();

    return 0;
}



