#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string str ;
	    int a, b, n , cnta=0 , cntb=0;
	    cin>>n>>a>>b;
	    cin>>str;
	    for(int i=0;i<str.length();i++)
	    {
	        if(str[i]=='0')
	        {
	            cnta++;
	        }
	        else
	        {
	            cntb++;
	        }
	    }
	    
	    cout<<(cnta*a)+(cntb*b)<<"\n";
	}
	return 0;
}
