/*
    author    : MishkatIT
    created   : Sunday 2023-04-30-23.51.28
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
const int N = 3e5 + 10;
vector<int> Xor(N);
void pre(void)
{
    for (int i = 1; i < N; i++)
    {
        Xor[i] = Xor[i - 1] ^ i;
    }
}

int main()
{
    fio;
    pre();
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = a;
        if(Xor[a - 1] != b)
        {
            int x = Xor[a - 1];
            if ((x ^ b) == a)ans += 2;
            else ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}

