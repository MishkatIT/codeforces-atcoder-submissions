/*
    author    : MishkatIT
    created   : Monday 2023-03-06-15.57.19
    problem   : C. Perform the Combo
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
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        vector<int> v(m);
        for(auto &i : v)
        {
            cin >> i;
        }

        // Initialize a vector to keep track of the cumulative frequency of each index
        vector<long long> pre(str.length() + 5);
        for (int i = 0; i < m; i++)
        {
            pre[1]++;
            pre[v[i] + 1]--;
        }
        // Compute the actual frequency of each character using the prefix sum array
        for(int i = 1; i < str.length() + 1; i++)
        {
            pre[i] += pre[i - 1];
        }
        map<char, int> mp;
        for(char c = 'a'; c <= 'z'; c++)
        {
            mp[c] = 0;
        }
        // Update the occurrence of character to the map
        for(int i = 1; i < str.length(); i++)
        {
            mp[str[i - 1]] += pre[i];
        }

        // Add the the final character of the final String that have typed without any mistake.
        for(auto &i: str)
        {
            mp[i]++;
        }
        for(auto &i: mp)
        {
            cout << i.second << ' ';
        }
        cout << '\n';
    }
    return 0;
}
