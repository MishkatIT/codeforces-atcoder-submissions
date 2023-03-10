/*
    author    : MishkatIT
    created   : Friday 2023-03-10-23.42.49
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
    string str;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }
    int ans = 0;
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            int temp = 0;
            for(int k = 0; k < n; k++)
            {
                bool ok = true;
                for(int l = 0; l < v[k].size(); l++)
                {
                    if((v[k][l] - 'a' == i) || (v[k][l] - 'a' == j)) continue;
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                if(ok) temp += v[k].size();
            }
            ans = max(ans, temp);
        }
    }
    cout << ans;
    return 0;
}

