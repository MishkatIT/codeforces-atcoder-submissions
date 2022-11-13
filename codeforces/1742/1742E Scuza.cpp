/*
    author    : MishkatIT
    created   : Sunday 2022-11-13-12.30.48
    problem   : 1742 E. Scuza
*/
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long num, ques;
        cin >> num >> ques;
        long long arr[num];
        arr[0] = 0;
        vector<long long> prefix_sum(0);
        long long x;
        cin >> x;
        arr[1] = x;
        prefix_sum.push_back(x);
        for(long long i = 1; i < num; i++)
        {
            cin >> x;
            arr[i + 1] = arr[i] + x;
            prefix_sum.push_back(max(prefix_sum.back(), x));
        }
        long long q;
        for (long long i = 0; i < ques; i++)
        {
            cin >> q;
            cout << arr[upper_bound(prefix_sum.begin(), prefix_sum.end(), q) - prefix_sum.begin()] << ' ' ;
        }
        cout << '\n';
    }
    return 0;
}



