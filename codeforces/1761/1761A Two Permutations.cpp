/*
    author    : MishkatIT
    created   : Sunday 2022-11-20-22.23.41
    problem   : A. Two Permutations
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
        bool ok = false;
        int n, a, b;
        cin >> n >> a >> b;
        if(n == a && a == b)
            ok = true;
        else if (a + b < n - 1)
            ok = true;
        cout << (ok ? "YES" : "NO") << '\n';
    }
}



