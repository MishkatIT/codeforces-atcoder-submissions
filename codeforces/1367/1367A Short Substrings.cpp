#include<iostream>
#define nl "\n"
#define forn(i) for (int i = 0; i < len-1; i=i+2)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int len = str.length();
        forn(i)
            cout << str[i];
        cout << str[len-1] << endl;
    }
}








