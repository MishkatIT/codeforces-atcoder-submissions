/*
    author    : MishkatIT
    created   : Monday 2022-10-24-01.36.45
    problem   : 1296 B. Food Buying
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long total(long b)
{
    long ans=b;
st:
    if(b<10)
        return ans;
    ans+=(b/10);
    b=(b/10)+(b%10);
    goto st;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long b;
        cin >> b;
        cout << total(b) << '\n';
    }

    return 0;
}

