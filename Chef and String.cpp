#include <bits/stdc++.h>
using namespace std;
string left(string s){
    char ch=s[0];
    for(int i=0;i<s.length()-1;i++){
        s[i]=s[i+1];
    }
    s[s.length()-1]=ch;
    return s;
}
string right(string s){
    char ch=s[s.length()-1];
    for(int i=s.length()-1;i>0;i--){
        s[i]=s[i-1];
    }
    s[0]=ch;
    return s;
}

int main() {
	// your code goes here
	int sk;
	cin>> sk;
	while(sk--)
	{
	    string s,l,r;
	    cin>>s;
	    int count=0;
	    l=left(s);
	    r=right(s);
	    if(l==r)    cout<<"YES\n";
	    else    cout<<"NO\n";
	}
	return 0;
}
