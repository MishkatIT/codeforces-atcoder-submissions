/*
    author    : MishkatIT
    created   : Thursday 2023-04-13-05.48.23
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
        string str;
        cin >> str;
        int freq[3];
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if(str[i] == 'a')
            {
                freq[0] = freq[1] = freq[2] = 0;
                freq[0]++;
                for (int j = i + 1; j < min(n, i + 7); j++)
                    if(str[j] == 'a')
                    {
                        freq[0]++;
                        if(freq[0] > freq[1] && freq[0] > freq[2])
                            ans = min(ans, j - i + 1);
                    }
                    else
                        freq[str[j] - 'a']++;

            }
            if(ans == 2) break;
        }
        if(ans == INT_MAX)
            ans = -1;
        cout << ans << '\n';
    }
    return 0;
}
