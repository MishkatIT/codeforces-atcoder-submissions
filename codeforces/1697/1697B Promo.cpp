/*
    author    : MishkatIT
    created   : Wednesday 2022-10-26-22.01.42
    problem   : 1697 B. Promo
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    long long n, q;
    cin >> n >> q;
    long long arr[n];
    for(long long i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n, greater<>());

    vector<long long>v{0};
    for(long long i=0; i<n; i++) //prefix sum
        v.push_back(arr[i]+v[i]);


    while(q--)
    {
        int x, y;
        cin >> x >> y;
        long long ans = v[x]-v[x-y];
        cout << ans << '\n';
    }
    return 0;
}



