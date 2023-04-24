/*
    author    : MishkatIT
    created   : Monday 2023-04-24-20.24.12
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

bool check(long long n)
{
    long long x = n;
    while(x)
    {
        int temp = x % 10;
        if(temp)
        {
            if(n % temp != 0)
                return false;
        }
        x /= 10;
    }
    return true;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        while(true)
        {
            if(!check(n))n++;
            else break;
        }
        cout << n << '\n';
    }
    return 0;
}

