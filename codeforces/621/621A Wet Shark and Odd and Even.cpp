/*
    author    : MishkatIT
    created   : Wednesday 2022-11-16-00.14.10
    problem   : 621 A. Wet Shark and Odd and Even
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<long long> neg;
    long long cnt = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp & 1)
        {
            neg.push_back(temp);
            cnt++;
        }
        else
            ans += temp;
    }
    sort(neg.begin(), neg.end());
    long long sum = 0;
    if(cnt & 1)
        neg.erase(neg.begin());
    sum = accumulate(neg.begin(), neg.end(), sum);
    cout << (long long)(ans + sum);

    return 0;
}



