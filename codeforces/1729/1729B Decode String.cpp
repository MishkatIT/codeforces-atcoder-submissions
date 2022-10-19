/*
    author    : MishkatIT
    created   : Thursday 2022-10-20-02.08.25
    problem   : 1729 B. Decode String
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string str, s;
        cin >> n >> str;
        for(int i=n-1; i>=0; )
        {
            if(str[i] != '0')
            {
                s.push_back((char)(str[i]+'0'));
                i--;
            }
            else
            {
                string temp;
                temp.push_back(str[i-2]);
                temp.push_back(str[i-1]);
                s.push_back((char(stoi(temp)+96)));
                i-=3;
            }

        }

        reverse(s.begin(), s.end());
        cout << s <<'\n';


    }

    return 0;
}

