#include <bits/stdc++.h>
using namespace std;

int main() {
    
	 int t;
	 cin>>t;
	 while(t--){
	 int a,b,c;
	 cin>>a>>b>>c;
	 int diff1=abs(a-1);
	 int diff2=abs(b-c)+abs(c-1);
	
	 if(diff1<diff2){
	     cout<<1<<endl;
	 }
	 else if(diff2<diff1){
	     cout<<2<<endl;
	 }
	 else{
	     cout<<3<<endl;
	 }
	 }

}

