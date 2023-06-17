/*
    author    : MishkatIT
    created   : Saturday 2023-06-17-21.15.33
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<bool> prime(100000 + 10);
    for (int i = 2; i * i <= n + 1; i++)
    {
        for (int j = i * i; j <= n + 1; j += i)
            prime[j] = true;
    }
    vector<int> ans;
    set<int> s;
    for (int i = 2; n; i++)
    {
        if(prime[i])
            ans.push_back(2), s.insert(2);
        else
            ans.push_back(1), s.insert(1);
        n--;
    }
    cout << (int)s.size() << '\n';
    for(auto i: ans)
        cout << i << ' ' ;
    return 0;
}
