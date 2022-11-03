/*
    author    : MishkatIT
    created   : Thursday 2022-11-03-23.19.07
    problem   : 158 B. Taxi
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t = 1;
//    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end(), greater<>());
        int cnt = 0, i, j;
        for (i = 1; i < v.size(); i++)
        {
            if(v[i - 1] == 4)
            {
                cnt++;
                continue;
            }
            int sum = v[i - 1];
            for( j = v.size() - 1; j >= 0; j--)
            {
                sum += v[j];
                if(sum > 4)
                {
                    cnt++;
                    break;
                }
                else if(sum == 4)
                {
                    cnt++;
                    v.pop_back();
                    break;
                }
                else
                    v.pop_back();

            }
            if(j == -1)
                cnt++;
        }
        if(i == v.size() && j != -1)
            cnt++;
        cout << cnt;
    }

    return 0;
}

