/*
    author    : MishkatIT
    created   : Thursday 2023-02-02-20.01.20
    problem   : C. Building Permutation
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int n;
    cin >> n;
    int arr[n + 10];
    memset(arr, false, sizeof arr);
    int temp;
    vector<int> neg, pos;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp >= 1  && temp <= n && !arr[temp])
            arr[temp] = true;
        else if (temp < 1)
            neg.push_back(temp);
        else
            pos.push_back(temp);
    }
    int ans = 0;
    int sz = pos.size();
    if(sz)
    {
        sort(pos.rbegin(), pos.rend());
        int i = 0;
        for (int j = n; j >=0; j--)
        {
            if(!arr[j])
            {
                ans += abs(pos[i] - j);
                i++;
            }
            if(i == sz)
                break;
        }
    }
//    cout << 'd' << ans << '\n';
    sz = neg.size();
    if(sz)
    {
        sort(neg.begin(), neg.end());
        int i = 0;
        for (int j = 1; j <= n; j++)
        {
            if(!arr[j])
            {
                ans += abs(j + ( -1 * neg[i]));
                i++;
            }
            if( i == sz)
                break;
        }
    }
    cout << ans;
    return 0;
}
