#include <bits/stdc++.h>
using namespace std;

int main() {
	 int n,l,r;
	 cin>>n>>l>>r;
	 int cnt=0;
	 while(n--){
	     int a,b;
	     cin>>a>>b;
	     if((a<=l)&&(b>=r)){
	         cnt++;
	     }
	 }
	 cout<<cnt<<'\n';

}
