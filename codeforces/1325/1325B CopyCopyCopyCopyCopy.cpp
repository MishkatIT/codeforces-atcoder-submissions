/*
    author    : MishkatIT
    created   : Tuesday 2023-04-11-23.29.33
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        cout << (int)s.size() << '\n';
    }
    return 0;
}

