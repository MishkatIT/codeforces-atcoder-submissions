/*
    author    : MishkatIT
    created   : Sunday 2023-03-26-20.35.44
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
      vector<int>a(n);
      for (auto &i : a)
      {
          cin >> i;
      }
      vector<int>b(n);
      for (auto &i : b)
      {
          cin >> i;
      }
      for (int i = 0; i < n; i++)
      {
        if(a[i] < b[i])
          swap(a[i], b[i]);
      }
      int x = *max_element(a.begin(), a.end());
      int y = *max_element(b.begin(), b.end());
      if(x == a.back() && y == b.back())
        cout << "YES" << '\n';
      else
        cout << "NO" << '\n';
    }
    return 0;
}
