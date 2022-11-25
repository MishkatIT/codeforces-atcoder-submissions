/*
    author    : MishkatIT
    created   : Friday 2022-11-25-14.40.29
    problem   : 1738 A. Glory Addicts
*/
#include<iostream>
#include<queue>
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
        int arr[n];
        int one = 0, zero = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i])
                one++;
            else
                zero++;
        }
        int mn = min (one, zero);
        long long xtra = 1e10;
        long long temp = 0;
        priority_queue<int> fire, frost;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (!arr[i])
                fire.push(temp);
            else
                frost.push(temp);
            xtra = min(xtra, temp);

        }

        long long ans = 0;
        for (int i = 0; i < mn; i++)
        {
            if(!fire.empty())
            {
                ans += (fire.top() * 2 );
                fire.pop();
            }
            if (!frost.empty())
            {
                ans += (frost.top() * 2);
                frost.pop();
            }
        }
        while(!fire.empty())
        {
            ans += fire.top();
            fire.pop();
        }

        while(!frost.empty())
        {
            ans += frost.top();
            frost.pop();
        }
        if(one == zero)
            ans -= xtra;
        cout << ans << '\n';
    }

    return 0;
}



