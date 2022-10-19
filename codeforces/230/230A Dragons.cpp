/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-16.49.06
    problem   : 230 A. Dragons
*/
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    int strength, dragon;
    bool ok = true;
    cin >> strength >> dragon;
    vector<pair<int,int>>v(dragon);
    for(int i=0; i<dragon; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    for(int i=0; i<dragon; i++)
        if(strength > v[i].first)
            strength+=v[i].second;
        else
        {
            ok = false;
            break;
        }
    if(ok)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
