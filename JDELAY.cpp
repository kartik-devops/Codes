#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int count=0;
	    cin>>n;
	    int s[n] , j[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i]>>j[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(j[i]-s[i]>5)
	        {
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
