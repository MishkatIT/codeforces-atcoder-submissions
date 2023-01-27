/*
    author    : MishkatIT
    created   : Friday 2023-01-27-21.42.21
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
        int n;
        cin >> n;
        map<int, int> mp;
        int temp;
        for (int i = 1; i < n; i++)
        {
            cin >> temp;
            mp[temp] = i;
        }
        int arr[n + 10];
        bool ok = false;
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> arr[j];
            }
            if(!ok)
            {
                for (int j = 1; j < n; j++)
                    if(mp[arr[j]] == 0)
                    {
                        ok = true;
                        if(j == 1)
                        {
                            mp[arr[j]] = mp[arr[j + 1]];
                        }
                        else
                        {
                            mp[arr[j]] = mp[arr[j - 1]] + 1;
                        }
                        for (auto& k: mp)
                        {
                            if(k.first != arr[j] && k.second >= mp[arr[j]])
                                k.second++;
                        }
//                        for (auto l: mp)
//                            cout << l.first << ' ' << l.second << '\n';
                        break;
                    }
            }
            for (int j = 2; j < n; j++)
            {
                if(mp[arr[j]] < mp[arr[j - 1]])
                    swap(mp[arr[j]],  mp[arr[j - 1]]);
            }
        }
        map<int, int> ans;
        for(auto i: mp)
            ans[i.second] = i.first;
        for(auto i: ans)
            cout << i.second << ' ';
        cout << '\n';
    }
    return 0;
}

