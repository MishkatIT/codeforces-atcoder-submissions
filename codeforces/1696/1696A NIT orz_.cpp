/*
    author    : MishkatIT
    created   : Friday 2022-12-02-14.28.03
    problem   : 1696 A. NIT orz!
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, z;
        cin >> n >> z;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] |= z;
        }
        cout << *max_element(v.begin(), v.end()) << '\n';
    }
    return 0;
}

