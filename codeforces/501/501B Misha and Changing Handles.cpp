/*
    author    : MishkatIT
    created   : Monday 2023-06-19-00.34.46
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    vector<pair<string, string>> ans;
    for (int i = 0; i < n; i++)
    {
        if(v[i].first != "#")
        {
            string x = v[i].second;
            for (int j = i + 1; j < n; j++)
            {
                if(v[j].first != "#" && v[j].first == x)
                {
                    x = v[j].second;
                    v[i].second = "#";
                    v[j].first = "#";
                }
            }
            ans.push_back({v[i].first, x});
        }
    }
    cout << (int)ans.size() << '\n';
    for(auto& i: ans)
        cout << i.first << ' ' << i.second << '\n';
    return 0;
}
