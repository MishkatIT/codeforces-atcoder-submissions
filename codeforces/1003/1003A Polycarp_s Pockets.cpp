/*
    author    : MishkatIT
    created   : Tuesday 2022-11-01-01.20.57
    problem   : 1003 A. Polycarp's Pockets
*/
#include<iostream>
#include<algorithm>
#include<map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    int mx = 0;
    for(auto i: mp)
    {
        if(i.second > mx)
        {
            mx = i.second;
        }
    }
    cout << mx;

    return 0;
}

