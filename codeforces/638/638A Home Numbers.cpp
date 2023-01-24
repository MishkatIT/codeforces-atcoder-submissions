/*
    author    : MishkatIT
    created   : Tuesday 2023-01-24-19.57.58
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void LesGo (void)
{
  int n, a;
  cin >> n >> a;
  if(!(a & 1))
    a = (n + 1) - a;
  cout << (a + 1) / 2;
  return;
}
int main()
{
    fio;
    int t = 1;
//    cin >> t;
    while(t--)
        LesGo();
    return 0;
}
