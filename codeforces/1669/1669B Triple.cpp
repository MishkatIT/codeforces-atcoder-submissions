/*
    author    : MishkatIT
    created   : Thursday 2022-10-20-01.21.22
    problem   : 1669 B. Triple
*/
#include<iostream>
#include<unordered_map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int mx(int n);
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << mx(n) << '\n';
    }

    return 0;
}
int mx(int n)
{
    int arr[n];
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int temp = 0, ans;
    for(auto x: mp)
        if(temp<x.second)
        {
            ans = x.first;
            temp = x.second;
        }
    if(temp < 3)
        ans = -1;
    return ans;

}
