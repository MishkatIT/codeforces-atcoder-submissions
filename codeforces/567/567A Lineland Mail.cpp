/*
    author    : MishkatIT
    created   : Tuesday 2022-11-15-16.43.52
    problem   : 567 A. Lineland Mail
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v;
    int x, i = 0;
    cin >> x;
    bool ok = false;
    if( x < 0)
    {
        v.push_back(0);
        i++;
        ok = true;
    }
    else
        v.push_back(x);
    int temp;
    for(i = 1; i < n; i++)
    {
        cin >> temp;
        if(ok)
            v.push_back(temp + abs(x));
        else
            v.push_back(temp);
    }
    cout << v[1] - v[0] << ' ' << v[n - 1] - v[0] << '\n';
    for (int i = 1; i < n - 1; i++)
        cout << min(v[i + 1] - v[i], v[i] - v[i - 1]) << ' ' << max (v[n - 1] - v[i], v[i] - v[0]) << '\n';
    cout << v[n - 1] - v[n - 2] << ' ' << v[n - 1] - v[0] << '\n';


    return 0;
}



