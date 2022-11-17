/*
    author    : MishkatIT
    created   : Friday 2022-11-18-00.51.14
    problem   : 1343 C. Alternating Subsequence
*/
#include<iostream>
#include<algorithm>
#include<vector>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
//        int arr[n];
        long long sum = 0;
        long long a, x = 0;
        vector<long long>v;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if(a > 0)
            {
                if(v.size())
                {
                    sum += *max_element(v.begin(), v.end());
                    v.clear();
                }
                if(a > x)
                {
                    sum += a;
                    sum -= x;
                    x = a;
                }
            }
            else
            {
                x = 0;
                v.push_back(a);
            }
        }
        if(v.size())
        {
            sum += *max_element(v.begin(), v.end());
            v.clear();
        }
        cout << sum << '\n';

    }

    return 0;
}



