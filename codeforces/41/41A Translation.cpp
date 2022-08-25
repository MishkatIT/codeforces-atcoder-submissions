#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string rev, cmpr;
   cin >> rev >> cmpr;
   reverse(rev.begin(), rev.end());
   if (rev == cmpr)
    cout << "YES";
   else
    cout << "NO";
}

