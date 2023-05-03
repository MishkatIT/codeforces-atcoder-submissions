/*
    author    : MishkatIT
    created   : Wednesday 2023-05-03-20.41.04
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
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
      n++;
      for (int i = 2; i <= n; i++)
      {
        cout << i << " \n"[i == n];
      }
    }
    return 0;
}

