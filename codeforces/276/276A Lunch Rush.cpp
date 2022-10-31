/*
    author    : MishkatIT
    created   : Tuesday 2022-11-01-01.59.07
    problem   : 276 A. Lunch Rush
*/
#include<iostream>
#include<deque>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long n, k;
    deque<long> dq;
    cin >> n >> k;
    while(n--)
    {
        long f, t;
        cin >> f >> t;
        if(k - t < 0)
            dq.push_front(f - (t - k));
        else
            dq.push_front (f);
    }
    cout << *max_element(dq.begin(), dq.end());
    return 0;
}

