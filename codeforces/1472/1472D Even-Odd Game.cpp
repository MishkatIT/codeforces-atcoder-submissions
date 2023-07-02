/*
    author    : MishkatIT
    created   : Sunday 2023-07-02-19.57.25
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x & 1) odd.push_back(x);
            else even.push_back(x);
        }
        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());
        int i = 0, j = 0;
        ll alice = 0, bob = 0;
        int oddlen = odd.size(), evenlen = even.size();
        for (int x = 0; i < evenlen || j < oddlen; x++)
        {
            if(!(x & 1))
            {
                if(i < evenlen && j < oddlen)
                {
                    if(even[i] >= odd[j])
                        alice += even[i++];
                    else
                        j++;

                }
                else if(i < evenlen)
                    alice += even[i++];
                else
                    j++;
            }
            else
            {
                if(i < evenlen && j < oddlen)
                {
                    if(even[i] <= odd[j])
                        bob += odd[j++];
                    else
                        i++;

                }
                else if(j < oddlen)
                    bob += odd[j++];
                else
                    i++;
            }
        }
        cout << (alice > bob ? "Alice" : (alice < bob ? "Bob" : "Tie")) << '\n';
    }
    return 0;
}

