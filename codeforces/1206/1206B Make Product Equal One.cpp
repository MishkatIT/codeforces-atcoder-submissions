/*
    author    : MishkatIT
    created   : Monday 2022-10-24-21.50.18
    problem   : 580 B. Make Product Equal One
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long num;
    long long n;
    long long neg = 0;
    long long ans = 0;
    long long zero = 0;
    cin >> num;
    while(num--)
    {
        cin >> n;
        if(n<0)
            neg++;
        if(n==0)
            zero++;
        n = abs(n);
        if(n != 1 && n != 0)
            ans+=abs(n-1);

    }
    if(zero>0)
        ans+=zero;
    else if(neg%2==1)
        ans+=2;
    cout << ans;
    return 0;
}


