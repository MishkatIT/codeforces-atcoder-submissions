#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	cin>>s>>t;
	set<char>st;
	for(int i=0;i<t.size();i++){
	     st.insert(t[i]);
	}
	for(int i=1;i<s.size();i++){
	     if(s[i]>='A'&&s[i]<='Z'){
	          if(st.find(s[i-1])==st.end()){
	              cout<<"No";
	              return 0;
	          }
	     }
	}
	cout<<"Yes";
	return 0;

}
