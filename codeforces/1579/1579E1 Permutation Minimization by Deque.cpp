/*
    author    : MishkatIT
    created   : Tuesday 2022-10-25-18.18.42
    problem   : 1579 E1. Permutation Minimization by Deque
*/
#include<iostream>
#include<algorithm>
#include<deque>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n, pos;
        cin >> n;
        long long arr[n];
        for(long long i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]==1)
                pos = i;
        }
        deque<long long int>v;
        v.insert(v.begin(), arr[0]);
        for(long long i=1; i<=pos; i++)
        {
            if(v[0]>arr[i])
                v.insert(v.begin(), arr[i]);
            else
                v.push_back(arr[i]);
        }
        for(auto i: v)
            cout << i << ' ';
        for(long long i=pos+1; i<n; i++)
            cout << arr[i] << ' ';

        cout << '\n';
    }

    return 0;
}



