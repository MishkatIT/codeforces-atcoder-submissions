/*
    author    : MishkatIT
    created   : Friday 2022-11-11-04.43.26
    problem   : 237 A. Free Cash
*/
#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    map<string, int> mp;
    string h, m;
    while(n--)
    {
        cin >> h >> m;
        if(m.length() < 2)
            m = "x" + m;
        h += m;
        mp[h]++;
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



