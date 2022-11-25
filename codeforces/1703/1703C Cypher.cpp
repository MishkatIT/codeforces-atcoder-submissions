/*
    author    : MishkatIT
    created   : Friday 2022-11-25-20.57.59
    problem   : 1703 C. Cypher
*/
#include<iostream>
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
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            int len;
            cin >> len;
            string str;
            cin >> str;
            int pos = arr[i];
            for (int j = 0; j < len; j++)
            {
                if(str[j] == 'D')
                    pos++;
                else
                    pos--;
                if(pos > 9)
                    pos = 0;
                if(pos < 0)
                    pos = 9;
            }
            cout << pos << ' ';
        }
        cout << '\n';
    }
    return 0;
}



