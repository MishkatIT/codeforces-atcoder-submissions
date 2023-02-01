/*
    author    : MishkatIT
    created   : Thursday 2023-02-02-01.07.38
    problem   : B. Divisors of Two Integers
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    cout << v.back() << ' ';
    v.insert(v.begin(), 0);
    for (int i = n; i > 0; i--)
    {
        if((v.back() % v[i] != 0) || (v[i] == v[i - 1]))
        {
            cout << v[i];
            return 0;
        }
    }
}


