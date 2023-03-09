/*
    author    : MishkatIT
    created   : Friday 2023-03-10-01.15.49
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
bool LesGo (void)
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    stack<char> st;
    int a, b, c;
    a = b = c = 0;
    for(int i = 0, j = 0; i < n; i++)
    {
        if(t[i] == 'a')
        {
            if(st.empty())
            {
                if(s[j] == 'a') j++;
                else return false;
            }
            else
            {
                if(st.top() == 'a' && c == 0)
                    st.pop(), a--;
                else return false;
            }
        }
        else if(t[i] == 'b')
        {
            if(c != 0) return false;
            else if(!st.empty() && st.top() == 'b')
                st.pop(), b--;
            else
            {
                while(j < n)
                {
                    if(s[j] == 'a')
                        st.push('a'), a++;
                    else if(s[j] == 'b')
                    {
                        j++;
                        break;
                    }
                    else return false;
                    j++;
                }
            }
        }
        else
        {
            if(a != 0) return false;
            if(!st.empty() && st.top() == 'c')
                st.pop(), c--;
            else
            {
                while(j < n)
                {
                    if(s[j] == 'b')
                        st.push('b'), b++;
                    else if(s[j] == 'c')
                    {
                        j++;
                        break;
                    }
                    else return false;
                    j++;
                }
            }
        }
    }
    if(!st.empty())return false;
    return true;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        if(LesGo())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
